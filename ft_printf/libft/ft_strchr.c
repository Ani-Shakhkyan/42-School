/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:48:37 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:48:38 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string_cpy;

	string_cpy = (char*)s;
	while (*string_cpy != c)
	{
		if (*string_cpy == '\0')
			return (NULL);
		string_cpy++;
	}
	return (string_cpy);
}
