// #include "ft_printf.h"

// int		ft_isdigit(int c)

// {
// 	return (c >= '0' && c <= '9');
// }
// int		ft_atoi(const char *str)
// {
// 	int neg;
// 	int i;
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