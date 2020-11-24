/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   giga_brain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:24:46 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 10:24:49 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_look_around(int row, int col, int val)
{
	int v_offset;
	int h_offset;

	v_offset = -1;
	while (v_offset < 2)
	{
		h_offset = -1;
		while (h_offset < 2)
		{
			if (g_matrix_reloaded[row + h_offset][col + v_offset] == val)
			{
				g_matrix_reloaded[row][col] = val + 1;
				return (1);
			}
			h_offset++;
		}
		v_offset++;
	}
	return (0);
}

int		ft_fillboard(int val)
{
	int row;
	int col;
	int offset;
	int has_changed;

	offset = 0;
	row = 1;
	has_changed = 1;
	while (has_changed)
	{
		has_changed = 0;
		row = 1 + offset;
		while (row < g_rows + 1 - offset)
		{
			col = 1 + offset;
			while (col < g_cols + 1 - offset)
			{
				ft_fill_me_inside(row, col, val, &has_changed);
				col++;
			}
			row++;
		}
		ft_forgive_me_father(&val, &offset);
	}
	return (val - 1);
}

void	ft_printresult(void)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row < g_rows + 1)
	{
		col = 1;
		while (col < g_cols + 1)
		{
			if (g_matrix_reloaded[row][col] == -1)
				write(1, &g_charset[2], 1);
			else if (g_matrix_reloaded[row][col] == 0)
				write(1, &g_charset[1], 1);
			else
				write(1, &g_charset[0], 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	set_slot(char c, int row, int col)
{
	if (c == g_charset[0])
		g_matrix_reloaded[row][col] = -1;
	else
		g_matrix_reloaded[row][col] = 0;
}
