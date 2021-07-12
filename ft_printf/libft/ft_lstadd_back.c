/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:42:11 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/21 19:42:14 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_elem;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_elem = ft_lstlast(*lst);
			last_elem->next = new;
		}
	}
}
