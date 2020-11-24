/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:26:59 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 10:27:03 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_read_std(void)
{
	char	c;
	int		file;

	if (!(file = open("./stdinput", O_CREAT | O_WRONLY | O_TRUNC, 0644)))
		return (0);
	while (read(0, &c, 1))
	{
		write(file, &c, 1);
	}
	return (1);
}
