/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_revolutions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:14:37 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:14:47 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_malloc(int *file, char *filename)
{
	int row;

	row = 0;
	if ((*file = open(filename, O_RDONLY)) < 0)
		return (0);
	if (!(g_matrix_reloaded = malloc(sizeof(int *) * (g_rows + 2))))
		return (0);
	while (row < g_rows + 2)
	{
		if (!(g_matrix_reloaded[row] = malloc(sizeof(int) * g_cols + 2)))
			return (0);
		row++;
	}
	return (1);
}

void	ft_inside_read(int row, int col, int file)
{
	char c;

	if (row == 0 || row == g_rows + 1 || col == 0 || col == g_cols + 1)
		g_matrix_reloaded[row][col] = 0;
	else
	{
		read(file, &c, 1);
		if (c == '\n')
			read(file, &c, 1);
		set_slot(c, row, col);
	}
}

int		ft_fast_read(char *filename)
{
	int		col;
	int		row;
	char	c;
	int		file;

	row = 0;
	if (!(ft_malloc(&file, filename)))
		return (0);
	while (read(file, &c, 1))
		if (c == '\n')
			break ;
	while (row < g_rows + 2)
	{
		col = 0;
		while (col < g_cols + 2)
		{
			ft_inside_read(row, col, file);
			col++;
		}
		row++;
	}
	return (1);
}
