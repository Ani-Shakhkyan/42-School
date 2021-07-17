/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:38:46 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:38:48 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*z_arr;

	if (!(z_arr = (void*)malloc(count * size)))
		return (NULL);
	ft_memset(z_arr, 0, count * size);
	return (z_arr);
}
