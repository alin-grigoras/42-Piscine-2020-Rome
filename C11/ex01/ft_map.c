/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:10:47 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/11 19:10:52 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*results;

	if (!(results = malloc(length * sizeof(int))))
		return (NULL);
	index = 0;
	while (index < length)
	{
		results[index] = (*f)(tab[index]);
		index++;
	}
	return (results);
}
