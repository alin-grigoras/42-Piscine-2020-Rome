/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:11:18 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:12:29 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_store_map_params(char *filename)
{
	char	*str;
	char	c;
	int		i;
	int		bytes_c;

	bytes_c = ft_bytes_count(filename);
	i = 0;
	str = (char *)malloc(sizeof(char) * (bytes_c + 1));
	if ((g_fd = open(filename, O_RDONLY)) < 0)
		return (0);
	while (read(g_fd, &c, 1))
	{
		if (c != '\n' && c != '\0')
		{
			str[i] = c;
			i++;
		}
		else
			break ;
	}
	str[i] = '\0';
	return (str);
}

void	ft_store_charset(char *params)
{
	int		i;
	int		j;

	i = ft_strlen(params) - 3;
	j = 0;
	if (!(g_charset = (char *)malloc(sizeof(char) * 4)))
		return ;
	while (j < 3)
	{
		g_charset[j] = params[i];
		i++;
		j++;
	}
	g_charset[j] = '\0';
}

int		ft_store_rows_num(char *params)
{
	int i;

	i = 0;
	params[ft_strlen(params) - 3] = '\0';
	while (params[i])
	{
		if (ft_is_number(params[i]))
		{
			g_rows *= 10;
			g_rows += (params[i] - '0');
		}
		else
			break ;
		i++;
	}
	if (!g_rows)
		return (ft_close_file_err("map error\n"));
	return (1);
}
