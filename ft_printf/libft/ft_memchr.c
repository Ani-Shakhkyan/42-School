/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:45:02 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:45:04 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	unsigned char	c_cpy;

	s_cpy = (unsigned char*)s;
	c_cpy = (unsigned char)c;
	while (n > 0)
	{
		if (*s_cpy == c_cpy)
			return (s_cpy);
		s_cpy++;
		n--;
	}
	return (NULL);
}
