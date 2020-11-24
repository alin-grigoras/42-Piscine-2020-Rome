/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <agrigora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:25:54 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 17:25:59 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *ret;

	ret = (t_btree*)malloc(sizeof(t_btree));
	ret->item = item;
	ret->left = 0;
	ret->right = 0;
	return (ret);
}
