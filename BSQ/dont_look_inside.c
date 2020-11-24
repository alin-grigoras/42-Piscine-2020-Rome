/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dont_look_inside.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:12:18 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 10:12:28 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_set_xy(int *x, int *y, int row, int col)
{
	*y = row;
	*x = col;
}

int		ft_useless_square(int val, int x, int y)
{
	g_matrix_reloaded[y - val + 1][x - val + 1] = -1;
	return (val * 2 - 1);
}

void	ft_set_x_and_row(int *x, int *row)
{
	*x = 0;
	*row = 1;
}

void	ft_fill_me_inside(int row, int col, int val, int *has_changed)
{
	if (g_matrix_reloaded[row][col] == -1)
		if (ft_look_around(row, col, val))
			*has_changed = 1;
}

void	ft_forgive_me_father(int *val, int *offset)
{
	(*val)++;
	(*offset)++;
}
