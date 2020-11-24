/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:12:15 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:12:16 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_H
# define EX02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

extern char *g_prog;

void	ft_putstr(char *str);
void	print_error_msg(char *file);
int		ft_atoi(char *str);

#endif
