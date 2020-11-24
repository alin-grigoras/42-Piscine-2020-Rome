/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controllo_colonne_righe.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:17:27 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 17:26:34 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_controllo_colonne(int **tab, int valore, int x, int y);
int		ft_controllo_righe(int **tab, int valore, int x, int y);

int		ft_controllo_colonne_righe(int **tab, int valore, int x, int y)
{
	if (ft_controllo_colonne(tab, valore, x, y) &&
ft_controllo_righe(tab, valore, x, y))
		return (1);
	return (0);
}

int		ft_controllo_colonne(int **tab, int valore, int x, int y)
{
	int i;
	int j;

	i = x;
	j = y;
	while (--i > 0)
	{
		if (valore == tab[i][j])
			return (0);
	}
	return (1);
}

int		ft_controllo_righe(int **tab, int valore, int x, int y)
{
	int i;
	int j;

	i = x;
	j = y;
	while (--j > 0)
	{
		if (valore == tab[i][j])
			return (0);
	}
	return (1);
}
