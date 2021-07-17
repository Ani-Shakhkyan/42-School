#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int treat_string(va_list args)
{
    char* string;
    size_t len;
    size_t i;

    i = 0;
    string = va_arg(args,char*);
    len = ft_strlen(string);
    while(i < len){
        write(1,&string[i],1);
        i++;
    }
   return 0;
}
// int variadic(char *str,...)
// {
//     va_list args;
// 	va_start(args, str);
//     treat_string(args);
//     return 0;
// }
// int main()
// {
//     variadic("hello","string");
//     return(0);
// }