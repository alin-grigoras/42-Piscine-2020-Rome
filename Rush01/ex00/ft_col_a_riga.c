/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_a_riga.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:28:06 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 17:31:36 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_col_a_riga(int **tab, int pos_colonna)
{
	int i;
	int riga;
	int *dest;

	riga = 1;
	i = 0;
	dest = malloc(sizeof(dest) * 4);
	while (riga <= 4)
	{
		dest[i] = tab[riga][pos_colonna];
		i++;
		riga++;
	}
	return (dest);
}

int		*ft_col_a_riga_rev(int **tab, int pos_colonna)
{
	int i;
	int riga;
	int *dest;

	riga = 4;
	i = 0;
	dest = malloc(sizeof(dest) * 4);
	while (riga >= 1)
	{
		dest[i] = tab[riga][pos_colonna];
		i++;
		riga--;
	}
	return (dest);
}
