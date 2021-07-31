/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 18:29:38 by ashakhky          #+#    #+#             */
/*   Updated: 2021/07/31 18:33:58 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	treat_dec(va_list args, int *counter)
{
	long int	num;
	char		*str_num;
	char		is_minus;
	size_t		i;
	size_t		len;

	is_minus = 0;
	i = -1;
	num = va_arg(args, int);
	if (num < 0)
	{
		is_minus = '-';
		num = num * -1;
		write(1, &is_minus, 1);
		*counter += 1;
	}
	str_num = ft_ull_base(num, 10);
	len = ft_strlen(str_num);
	*counter += (int)len;
	while (++i < len)
		write(1, &str_num[i], 1);
	free(str_num);
}
