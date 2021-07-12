#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	i;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int	width_to_num(char *str)
{
	int i;
	char* number;
	int num;
	size_t length;

	length = ft_strlen(str);
	number =(char*)malloc(sizeof(int) * length);
	i= 0;
	while (ft_isdigit(str[i]))
	{
		printf("iterattoin %d\n", i);
        number[i] = str[i];
        i++;
    }
	num = ft_atoi(number);
	free(number);
    return (num);
}

flags width_determine(int number, va_list args, flags flag)
{
    if(flag.star == 1 && flag.dot != 1)
        flag.width = va_arg(args,int);
    else
        flag.width = number;// number comes from width to num function
    return flag;
}

// int main()
// {
//     char* num = "267ds";
//     int number = width_to_num(num);
//     printf("%d\n",number);
// }
