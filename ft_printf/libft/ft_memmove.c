/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:45:31 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:45:33 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dst_cpy;
	char			*src_cpy;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_cpy = (char*)dst;
	src_cpy = (char*)src;
	i = 0;
	if (dst_cpy > src_cpy)
		while (len-- > 0)
			dst_cpy[len] = src_cpy[len];
	else
		while (i < len)
		{
			dst_cpy[i] = src_cpy[i];
			i++;
		}
	return (dst);
}
