/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:34:07 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 10:34:11 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_start_program(int argc, char **argv, int *i)
{
	int val;
	int size;

	g_cols = 0;
	g_rows = 0;
	if (ft_valid_map(argv[*i]))
	{
		ft_fast_read(argv[*i]);
		val = ft_fillboard(0);
		size = ft_find_square_center(val);
		ft_draw_square(size);
		ft_printresult();
	}
	if (*i < argc - 1)
		write(1, "\n", 1);
	(*i)++;
}

int		main(int argc, char **argv)
{
	int i;
	int val;
	int size;

	i = 1;
	if (argc == 1)
	{
		ft_read_std();
		if (ft_valid_map("stdinput"))
		{
			ft_fast_read("stdinput");
			val = ft_fillboard(0);
			size = ft_find_square_center(val);
			ft_draw_square(size);
			ft_printresult();
		}
		i++;
	}
	else
	{
		while (argv[i])
			ft_start_program(argc, argv, &i);
	}
	return (0);
}
