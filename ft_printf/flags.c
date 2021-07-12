#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"


flags preparing_flags(char character, flags flag)
{
	printf("this is  the character : %c\n", character);
	if (character == '-')
		flag.minus = 1;
	else if (character == '0')
		flag.zero = 1;
	else if (character == '.')
		flag.dot = 1;
	else if (character == '*')
		flag.star = 1;
	else if (ft_isdigit(character) && (flag.dot != 1))
		flag.width = 1;
	else if (ft_isdigit(character) && (flag.dot == 1))
		flag.len = 1;
	return flag;
}

flags	initialize_flags(flags flag)
{
	flag.minus = 0;
	flag.dot = 0;
	flag.zero = 0;
	flag.star = 0;
	flag.min_wid = 0;
	flag.width = 0; // before dot
	flag.len = 0; // after dot
	flag.specifier = 0;
	return flag;
}

int	till_specifier(char c)
{
	if (c == 'd' || c == 'x' || c == 'i')
		return (0);
	if (c == 'c' || c == 's' || c == 'p')
		return (0);
	if (c == 'u' || c == 'X' || c == '%')
		return (0);
	return (1);
}

// flags treat_minus(char character, flags flag)
// {
// 	if(flag.zero == 1)
// 		flag.zero = 0;
// }

// void treat_dot(char character, flags *flag)
// {
// 	if(flag->dot == 1)
// 		flag->len = (int)(character - '0');
// }

// int main()
// {
// 	 char* a = "-*0d";

// 	flags flag;
// 	flag.dot = 0;
// 	flag = initialize_flags(flag);
// 	printf("before minus of flag %d\n",flag.minus);
// 	printf("before zero attribute of flag is %d\n",flag.zero);	
// 	printf("before star attribute of flag is %d\n",flag.star);	
// 	int i = 0;
// //	initialize_flags(flag);
// 	while(till_specifier(a[i]) != 0)
// 	{
// 		flag = preparing_flags(a[i],flag);
// 		i++;
// 	}

// 	printf("minus of flag %d\n",flag.minus);
// 	printf("zero attribute of flag is %d\n",flag.zero);	
// 	printf("star attribute of flag is %d\n",flag.star);	
// }