#include "ft_printf.h"

int treat_hex_lowercase(va_list args)
{
    int num;
    char* hex;
    size_t i;
    size_t len;
    
    i = 0;
    num = va_arg(args,int);
    hex = ft_atoi_base(num,16);
    hex = convert_to_lower(hex);
    len = ft_strlen(hex);
     while(i < len){
        write(1,&hex[i],1);
        i++;
    }
    free(hex);
    return 0;
}
// int variadic(char *str,...)
// {
//     va_list args;
// 	va_start(args, str);
//     treat_hex_lowercase(args);
//     return 0;
// }
// int main()
// {
//     variadic("hello",200);
//     return(0);
// }