/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:11:40 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:11:42 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char *argv[])
{
	char	c;
	int		sz;
	int		fd;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			sz = read(fd, &c, 1);
			while (sz)
			{
				write(1, &c, 1);
				sz = read(fd, &c, 1);
			}
			close(fd);
		}
	}
	return (0);
}
