/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fine_riga.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:33:31 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 17:47:59 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_quante_sono(int *tab_riga, int controllo_nb);
int		*ft_solo_riga(int **tab, int riga);
int		*ft_solo_riga_rev(int **tab, int riga);
int		*ft_col_a_riga(int **tab, int pos_colonna);
int		*ft_col_a_riga_rev(int **tab, int pos_colonna);

int		ft_fine_riga(int **tab, int riga)
{
	int	controllo_nb;
	int colonna;
	int *dest;

	colonna = 0;
	controllo_nb = tab[riga][colonna];
	dest = ft_solo_riga(tab, riga);
	if (ft_quante_sono(dest, controllo_nb) == 0)
	{
		free(dest);
		return (0);
	}
	colonna = 5;
	controllo_nb = tab[riga][colonna];
	dest = ft_solo_riga_rev(tab, riga);
	if (ft_quante_sono(dest, controllo_nb) == 0)
	{
		free(dest);
		return (0);
	}
	return (1);
}

int		ft_fine_colonna(int **tab, int colonna)
{
	int controllo_nb;
	int riga;
	int *dest;

	riga = 0;
	controllo_nb = tab[riga][colonna];
	dest = ft_col_a_riga(tab, colonna);
	if (ft_quante_sono(dest, controllo_nb) == 0)
	{
		free(dest);
		return (0);
	}
	riga = 5;
	controllo_nb = tab[riga][colonna];
	dest = ft_col_a_riga_rev(tab, colonna);
	if (ft_quante_sono(dest, controllo_nb) == 0)
	{
		free(dest);
		return (0);
	}
	return (1);
}
