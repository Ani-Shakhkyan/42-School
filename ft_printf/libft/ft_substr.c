/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:53:20 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:53:22 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(sub_str = malloc(sizeof(*s) * len + 1)))
		return (NULL);
	i = 0;
	while (*s && i < len && start < ft_strlen(s))
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
