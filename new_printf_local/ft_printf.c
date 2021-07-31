/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:43:02 by ashakhky          #+#    #+#             */
/*   Updated: 2021/07/31 16:57:31 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	treat_percent(int *counter)
{
	char	percent;

	percent = '%';
	*counter += 1;
	write(1, &percent, 1);
}

void	use_specifier(va_list args, char specifier, int *counter)
{
	if (specifier == 's')
		treat_string (args, counter);
	else if (specifier == 'p')
		treat_pointer (args, counter);
	else if (specifier == 'd' || specifier == 'i')
		treat_dec (args, counter);
	else if (specifier == 'x')
		treat_hex_lowercase (args, counter);
	else if (specifier == 'X')
		treat_hex_uppercase (args, counter);
	else if (specifier == 'u')
		treat_unsigned (args, counter);
	else if (specifier == 'c')
		treat_char (args, counter);
	else if (specifier == '%')
		treat_percent (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		rtn;

	va_start(args, str);
	rtn = 0;
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == '%' && *(str + i) != '\0' && *(str + 1 + i) != '\0')
		{
			i++;
			use_specifier(args, *(str + i), &rtn);
			i++;
		}
		if (*(str + i) != '%' && *(str + i) != '\0')
		{
			write(1, (str + i), 1);
			i++;
			rtn++;
		}
	}
	return (rtn);
}
