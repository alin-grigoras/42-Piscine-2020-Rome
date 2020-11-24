/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:46:15 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 12:47:08 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ele;
	t_list *ptr;

	ele = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = ele;
		return ;
	}
	ptr = *begin_list;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = ele;
}
