/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:09:33 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 13:09:35 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		swapped;
	t_list	*ptr;
	void	*tmp;

	if (!*begin_list)
		return ;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		ptr = *begin_list;
		while (ptr->next)
		{
			if (cmp(ptr->data, ptr->next->data) > 0)
			{
				swapped = 1;
				tmp = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = tmp;
			}
			ptr = ptr->next;
		}
	}
}
