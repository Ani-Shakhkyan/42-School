/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:39:48 by ashakhky          #+#    #+#             */
/*   Updated: 2021/07/31 18:42:15 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	treat_string(va_list args, int *counter)
{
	char	*string;
	size_t	len;
	size_t	i;

	i = -1;
	string = va_arg(args, char *);
	if (!string)
	{
		string = "(NULL)";
		while (*string)
		{
			write(1, string, 1);
			string++;
		}
		*counter += 6;
		return (0);
	}
	len = ft_strlen(string);
	*counter += (int)len;
	while (++i < len)
	{
		write(1, &string[i], 1);
	}
	return (0);
}

void	treat_char(va_list args, int *counter)
{
	char	charr;

	charr = va_arg(args, int);
	*counter += 1;
	write(1, &charr, 1);
}
