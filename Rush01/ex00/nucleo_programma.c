/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nucleo_programma.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:02:01 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 18:42:05 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_controllo_colonne_righe(int **tab, int
valore, int riga, int colonna);
int		ft_fine_riga(int **tab, int riga);
int		ft_fine_colonna(int **tab, int colonna);

void	stampa_tab(int **tabella)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			c = 48 + tabella[i][j];
			write(1, &c, 1);
			if (j < 4)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		fine_rec(int **tabella, int riga, int colonna)
{
	if (riga == 5 || colonna == 5)
	{
		stampa_tab(tabella);
		return (1);
	}
	return (0);
}

int		controllo_rec(int **tabella, int riga, int colonna, int i)
{
	if (fine_rec(tabella, riga, colonna))
		return (1);
	while (++i <= 4)
	{
		tabella[riga][colonna] = i;
		if (ft_controllo_colonne_righe(tabella, i, riga, colonna) &&
colonna < 4 && riga < 4 && controllo_rec(tabella, riga, colonna + 1, 0))
			return (1);
		else if (colonna == 4 && ft_controllo_colonne_righe
(tabella, i, riga, colonna) && ft_fine_riga(tabella, riga))
		{
			if (riga == 4 && ft_fine_colonna(tabella, colonna) &&
controllo_rec(tabella, riga + 1, colonna, 0))
				return (1);
			else if (riga != 4 && controllo_rec(tabella, riga + 1, 1, 0))
				return (1);
		}
		else if (riga == 4 && ft_controllo_colonne_righe
(tabella, i, riga, colonna) && ft_fine_colonna(tabella, colonna) &&
colonna != 4 && controllo_rec(tabella, riga, colonna + 1, 0))
			return (1);
		tabella[riga][colonna] = 0;
	}
	return (0);
}
