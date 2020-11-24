/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:50:23 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 13:04:44 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *prev;
	t_list *curr;

	if (!*begin_list || !(*begin_list)->next)
		return ;
	prev = *begin_list;
	curr = prev->next;
	prev->next = 0;
	while (curr->next)
	{
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}
	curr->next = prev;
	*begin_list = curr;
}
