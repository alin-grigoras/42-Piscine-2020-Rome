/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solo_riga.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:38:38 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 16:42:28 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_solo_riga(int **tab, int riga)
{
	int i;
	int j;
	int *dest;

	i = 1;
	j = 0;
	dest = malloc(sizeof(dest) * 4);
	while (j < 4)
	{
		dest[j] = 0;
		j++;
	}
	j = 0;
	while (i <= 4)
	{
		dest[j] = tab[riga][i];
		i++;
		j++;
	}
	return (dest);
}
