/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 08:57:20 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:17:53 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_valid_params(char *par)
{
	int i;

	i = ft_strlen(par) - 1;
	if (
		i < 3 ||
		!(ft_valid_chars(par[i], par[i - 1], par[i - 2])))
		return (ft_close_file_err("map error\n"));
	i -= 3;
	while (i >= 0)
	{
		if (!ft_is_number(par[i]))
			return (ft_close_file_err("map_error\n"));
		i--;
	}
	return (1);
}

int		close_and_return_one(void)
{
	close(g_fd);
	return (1);
}

int		ft_check_map(void)
{
	int		row;
	int		col;
	char	c;

	g_cols = 0;
	row = 0;
	col = 0;
	while (read(g_fd, &c, 1))
	{
		if (g_cols == 0 && c == '\n')
			g_cols = col;
		if (c == '\n')
		{
			if (col != g_cols)
				return (ft_close_file_err("map error\n"));
			col = -1;
			row++;
		}
		else if (!(ft_in_charset(c, g_charset)))
			return (ft_close_file_err("map error\n"));
		col++;
	}
	if (row != g_rows || col != 0 || g_cols == 0)
		return (ft_close_file_err("map error\n"));
	return (close_and_return_one());
}

int		ft_valid_map(char *filename)
{
	char *params;

	if (!(params = ft_store_map_params(filename)))
		return (ft_close_file_err("map error\n"));
	if (!(ft_valid_params(params)))
		return (0);
	ft_store_charset(params);
	if (!(ft_store_rows_num(params)))
		return (0);
	if (!(ft_check_map()))
		return (0);
	return (1);
}
