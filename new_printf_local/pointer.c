/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:06:10 by ashakhky          #+#    #+#             */
/*   Updated: 2021/07/31 17:56:26 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	treat_pointer(va_list args, int *counter)
{
	long long int	adress;
	char			*adddress;
	size_t			start;
	size_t			end;
	char			x;

	x = '0';
	write(1, &x, 1);
	x = 'x';
	write(1, &x, 1);
	start = 0;
	adress = (long long int)va_arg(args, int *);
	adddress = convert_to_lower(ft_ull_base(adress, 16));
	end = ft_strlen(adddress);
	*counter += (int)end + 2;
	while (start < end)
	{
		write(1, adddress + start, 1);
		start++;
	}
	free(adddress);
}
