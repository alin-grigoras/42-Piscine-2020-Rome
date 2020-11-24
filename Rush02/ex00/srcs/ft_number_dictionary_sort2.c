/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary_sort2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:38:44 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/08 18:38:45 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number_dictionary.h"

int		ft_sort_dict_f_normal(t_dict_entry *a, t_dict_entry *b)
{
	return (a->normal > b->normal);
}

int		ft_sort_dict_f_value(t_dict_entry *a, t_dict_entry *b)
{
	return (a->value > b->value);
}
