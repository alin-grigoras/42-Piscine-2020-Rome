/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:21:55 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 16:36:08 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	init_colonne_e_righe(int **tabella, char *str);
void	init_colonne(int **tabella, char *str, int riga);
void	init_righe(int **tabella, char *str, int colonna);

int		**init(char *str)
{
	int				**tabella;
	unsigned int	i;
	unsigned int	j;

	tabella = malloc(sizeof(*tabella) * 6);
	i = 0;
	while (i < 6)
	{
		tabella[i] = malloc(sizeof(**tabella) * 6);
		j = 0;
		while (j < 6)
		{
			tabella[i][j] = 0;
			j++;
		}
		i++;
	}
	init_colonne_e_righe(tabella, str);
	return (tabella);
}

void	init_colonne_e_righe(int **tabella, char *str)
{
	init_colonne(tabella, str, 0);
	str += 8;
	init_colonne(tabella, str, 5);
	str += 8;
	init_righe(tabella, str, 0);
	str += 8;
	init_righe(tabella, str, 5);
}

void	init_colonne(int **tabella, char *str, int riga)
{
	int i;

	i = 1;
	while (*str && i <= 4)
	{
		tabella[riga][i] = *str - '0';
		str += 2;
		i++;
	}
}

void	init_righe(int **tabella, char *str, int colonna)
{
	int i;

	i = 1;
	while (*str && i <= 4)
	{
		tabella[i][colonna] = *str - '0';
		str += 2;
		i++;
	}
}
