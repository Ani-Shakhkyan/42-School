/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:48:50 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:48:51 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	char	*s1_cpy;
	int		i;
	int		size;

	i = 0;
	size = 0;
	s1_cpy = (char*)s1;
	while (s1_cpy[size])
		size++;
	if (!(cpy = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (s1_cpy[i])
	{
		cpy[i] = s1_cpy[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
