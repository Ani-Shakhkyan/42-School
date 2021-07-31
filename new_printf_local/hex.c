/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:57:58 by ashakhky          #+#    #+#             */
/*   Updated: 2021/07/31 17:01:14 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	treat_hex_lowercase(va_list args, int *counter)
{
	unsigned int	num;
	char			*hex;
	size_t			i;
	size_t			len;

	i = 0;
	num = va_arg(args, int);
	hex = ft_ull_base(num, 16);
	hex = convert_to_lower(hex);
	len = ft_strlen(hex);
	*counter += (int)len;
	while (i < len)
	{
		write(1, &hex[i], 1);
		i++;
	}
	free(hex);
}
