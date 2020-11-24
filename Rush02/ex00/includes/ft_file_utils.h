/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:29:42 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/08 18:29:44 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_UTILS_H
# define FT_FILE_UTILS_H

# define SIZE_1B 1
# define SIZE_1K 1024

int		ft_open_file(char *path);

int		ft_close_file(int fd);

#endif
