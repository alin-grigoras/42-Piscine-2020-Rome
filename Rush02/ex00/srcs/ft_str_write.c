/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:39:56 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/08 18:39:57 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_str_write_to(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_str_write(char *str)
{
	ft_str_write_to(OUT, str);
}
