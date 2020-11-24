/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:34:53 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 10:34:56 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_bytes_count(char *filename)
{
	int		bytes_count;
	int		fd;
	char	c;
	int		i;

	i = 0;
	bytes_count = 0;
	if ((fd = open(filename, O_RDONLY)) < 0)
		return (0);
	while (read(fd, &c, 1))
		bytes_count++;
	close(fd);
	return (bytes_count);
}
