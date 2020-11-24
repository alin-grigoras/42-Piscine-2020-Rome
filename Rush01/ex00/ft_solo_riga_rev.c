/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solo_riga_rev.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:51:01 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 16:53:58 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_solo_riga_rev(int **tab, int riga)
{
	int i;
	int j;
	int *dest;

	i = 4;
	j = 0;
	dest = malloc(sizeof(dest) * 4);
	while (j < 4)
	{
		dest[j] = 0;
		j++;
	}
	j = 0;
	while (i >= 1)
	{
		dest[j] = tab[riga][i];
		i--;
		j++;
	}
	return (dest);
}
