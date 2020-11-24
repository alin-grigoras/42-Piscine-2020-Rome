/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:14:08 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:14:48 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_print_error(char *err)
{
	write(2, err, ft_strlen(err));
	return (0);
}

int		ft_close_file_err(char *err)
{
	close(g_fd);
	write(2, err, ft_strlen(err));
	return (0);
}
