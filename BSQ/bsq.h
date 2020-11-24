/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:28:19 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:28:22 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		g_rows;
int		g_cols;
int		g_fd;
int		**g_matrix_reloaded;

char	*g_charset;

int		ft_poker(int row, int col, int val);
int		ft_find_square_center(int val);
void	ft_draw_square(int size);
int		ft_look_around(int row, int col, int val);
int		ft_fillboard(int val);
void	ft_printresult();
void	set_slot(char c, int row, int col);
int		ft_fast_read(char *filename);
void	ft_inside_read(int row, int col, int file);
int		ft_print_error(char *err);
int		ft_fast_read(char *filename);
int		ft_close_file_err(char *err);
int		ft_strlen(char *str);
int		ft_in_charset(char c, char *charset);
int		ft_bytes_count(char *filename);
int		ft_three_diff_chars(char a, char b, char c);
int		ft_char_is_printable(char c);
int		ft_valid_chars(char a, char b, char c);
int		ft_is_number(char c);
int		ft_is_printable(char c);
int		ft_valid_params(char *params);
int		ft_store_rows_num(char *params);
int		ft_check_map(void);
int		ft_valid_map(char *filename);
char	*ft_store_map_params(char *filename);
void	ft_store_charset(char *params);
int		ft_read_std(void);
void	ft_set_x_and_row(int *x, int *row);
int		ft_useless_square(int val, int x, int y);
void	ft_set_xy(int *x, int *y, int row, int col);
void	ft_draw_last(int size, int row, int col);
void	ft_fill_me_inside(int row, int col, int val, int *has_changed);
void	ft_forgive_me_father(int *val, int *offset);

#endif
