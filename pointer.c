#include "ft_printf.h"

char* treat_pointer(va_list args)
{
    char *str;
    long long int adress;
    char *adddress;
    int* adr;
    adr = va_arg(args,int*);
    str = "0x";
    adress = (long long int)adr;
    adddress = ft_atoi_base(adress,16);
    adddress = convert_to_lower(adddress);
    adddress = ft_strjoin(str,adddress);// need to free adddress!!!!!!!!!!!!!!!!!!
    return adddress;
} 

// int variadic(char *str,...)
// {
//     char *str;

//     printf("%s\n",str);
//     va_list args;
// 	va_start(args, str);
//     str = treat_pointer(args);
//     return (int)ft_strlen(str);
// }
// int main()
// {
//     int m = 7;
//     printf("adress in main : %p \n",&m);
//     variadic("hello",&m);
//     return 0;
// }