/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:51:06 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:51:11 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*string_cpy;
	unsigned char	c_cpy;
	int				i;

	i = 0;
	string_cpy = (char*)s;
	c_cpy = (unsigned char)c;
	while (*string_cpy != '\0')
	{
		string_cpy++;
		i++;
	}
	while (i >= 0)
	{
		if (*string_cpy == c_cpy)
			return (string_cpy);
		i--;
		string_cpy--;
	}
	return (NULL);
}
