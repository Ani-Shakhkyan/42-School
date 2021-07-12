/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:45:18 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:45:20 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;
	size_t			i;

	i = 0;
	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (i < n)
	{
		if (*s2_cpy != *s1_cpy)
			return (*s1_cpy - *s2_cpy);
		i++;
		s1_cpy++;
		s2_cpy++;
	}
	if (i != n)
		return (*s1_cpy - *s2_cpy);
	return (0);
}
