/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_logic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:37:51 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:37:55 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_poker(int row, int col, int val)
{
	if (val == g_matrix_reloaded[row + 1][col])
	{
		if (val == g_matrix_reloaded[row][col + 1])
		{
			if (val == g_matrix_reloaded[row + 1][col + 1])
			{
				g_matrix_reloaded[row - val + 1][col - val + 1] = -1;
				return (1);
			}
		}
	}
	return (0);
}

int		ft_find_square_center(int val)
{
	int x;
	int y;
	int row;
	int col;

	if (val == 0)
		return (0);
	ft_set_x_and_row(&x, &row);
	while (row < g_rows + 1)
	{
		col = 1;
		while (col < g_cols + 1)
		{
			if (g_matrix_reloaded[row][col] == val)
			{
				if (ft_poker(row, col, val))
					return (val * 2);
				else if (x == 0)
					ft_set_xy(&x, &y, row, col);
			}
			col++;
		}
		row++;
	}
	return (ft_useless_square(val, x, y));
}

void	ft_draw_last(int size, int row, int col)
{
	int y;
	int x;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
			g_matrix_reloaded[row + x++][col + y] = -1;
		y++;
	}
}

void	ft_draw_square(int size)
{
	int row;
	int col;

	row = 1;
	while (row < g_rows + 1)
	{
		col = 1;
		while (col < g_cols + 1)
		{
			if (g_matrix_reloaded[row][col] == -1)
				break ;
			col++;
		}
		if (g_matrix_reloaded[row][col] == -1)
			break ;
		row++;
	}
	ft_draw_last(size, row, col);
}
