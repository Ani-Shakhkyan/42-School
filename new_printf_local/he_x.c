/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   he_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:01:28 by ashakhky          #+#    #+#             */
/*   Updated: 2021/07/31 17:05:56 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_to_lower(char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

void	treat_hex_uppercase(va_list args, int *counter)
{
	unsigned int	num;
	char			*hex;
	size_t			i;
	size_t			len;

	i = 0;
	num = va_arg(args, int);
	hex = ft_ull_base(num, 16);
	len = ft_strlen(hex);
	*counter += (int)len;
	while (i < len)
	{
		write(1, &hex[i], 1);
		i++;
	}
	free(hex);
}
