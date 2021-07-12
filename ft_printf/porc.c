// #include <stdarg.h>
// #include <stdio.h>
// //#include "ft_printf.h"
// #include <stdlib.h>
// #include <unistd.h>
// typedef struct flags
// {
// 	int	minus;
// 	int	dot;
// 	int	zero;
// 	int	star;
// 	int	min_wid;
// 	int width; // before dot
// 	int len; // after dot
// 	char specifier;
// } flags;

// size_t	ft_strlen(const char *s)
// {
// 	size_t i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// int	ft_atoi(const char *str)
// {
// 	int	neg;
// 	int	i;
// 	int num;

// 	i = 0;
// 	neg = 1;
// 	num = 0;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			neg *= -1;
// 		i++;
// 	}
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		num = num * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	return (num * neg);
// }

// int	ft_isdigit(int c)
// {
// 	return (c >= '0' && c <= '9');
// }
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// int	width_to_num(char *str)
// {
// 	int i;
// 	char* number;
// 	int num;
// 	size_t length;

// 	length = ft_strlen(str);
// 	number =(char*)malloc(sizeof(int) * length);
// 	i= 0;
// 	while (ft_isdigit(str[i]))
// 	{
// 		// printf("iterattoin %d\n",i);
//         number[i] = str[i];
//         i++;
//     }
// 	num = ft_atoi(number);
// 	free(number);
//     return (num);
// }

// flags width_determine(int number, va_list args, flags flag)
// {
//     if(flag.star == 1)
//         flag.width = va_arg(args,int);
//     else
//         flag.width = number;// number comes from width to num function
// 	return flag;
// }

// flags preparing_flags(char character, flags flag)
// {
// 	if (character == '-')
// 		flag.minus = 1;
// 	else if (character == '0')
// 		flag.zero = 1;
// 	else if (character == '.')
// 		flag.dot = 1;
// 	else if (character == '*')
// 		flag.star = 1;
// 	else if (ft_isdigit(character) && (flag.dot != 1))
// 		flag.width = 1;
// 	else if (ft_isdigit(character) && (flag.dot == 1))
// 		flag.len = 1;
// 	return flag;
// }

// flags	initialize_flags(flags flag)
// {
// 	flag.minus = 0;
// 	flag.dot = 0;
// 	flag.zero = 0;
// 	flag.star = 0;
// 	flag.min_wid = 0;
// 	flag.width = 0; // before dot
// 	flag.len = 0; // after dot
// 	flag.specifier = 0;
// 	return flag;
// }

// int	till_specifier(char c)
// {
// 	if (c == 'd' || c == 'x' || c == 'i')
// 		return (0);
// 	if (c == 'c' || c == 's' || c == 'p')
// 		return (0);
// 	if (c == 'u' || c == 'X' || c == '%')
// 		return (0);
// 	return (1);
// }

// flags treat_minus(flags flag)
// {
// 	if(flag.zero == 1)
// 		flag.zero = 0;
// 	return flag;
// }
// int printf_prototype(char* str,...)
// {
//     va_list args;
// 	va_start(args, str);
//     int pos = 0;
// 	int width = 0;
// 	int pos2;
//     flags flag;

//     while(str[pos] != '%')
//     {
//         write(1,&str[pos],1);
//         pos++;
//     }
//     pos++;
//     flag = initialize_flags(flag);
//     while(till_specifier(str[pos]))
//     {
// 		flag = preparing_flags(str[pos],flag);
//         pos++;
//     }
// 	flag = treat_minus(flag);

//     printf("minus is %d , and dot is: %d, width is : %d, length is : %d  and this is zero : %d", flag.minus, flag.dot, flag.width, flag.len, flag.zero);
// 	va_end(args);
//     return (0);
// }
// int main()
// {
//     printf_prototype("this is a %-55445.5d",5);
    
// }
