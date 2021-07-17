#include "ft_printf.h"
int treat_dec(va_list args)
{
    int num;
    char* str_num;
    int is_minus;

    is_minus = 0;
    size_t i;
    size_t len;
    i = 0;
    num = va_arg(args,int);
    if(num < 0)
    {
        is_minus = 1;
        num *= -1;
    }
    str_num = ft_atoi_base(num,10);
    if(is_minus)
        str_num = ft_strjoin("-",str_num);
    len = ft_strlen(str_num);
     while(i < len){
        write(1,&str_num[i],1);
        i++;
    }
    free(str_num);
    return 0;
}
// int variadic(char *str,...)
// {
//     va_list args;
// 	va_start(args, str);
//     treat_dec(args);
//     return 0;
// }
// int main()
// {
//     variadic("hello",-244452);
//     return(0);
// }