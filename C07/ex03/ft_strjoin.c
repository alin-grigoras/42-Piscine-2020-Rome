/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:23:53 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/04 19:05:46 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_concat(int i, char *dest, char *src)
{
	int		j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (i);
}

void	ft_do_concat(int size, char **strs, char *sep, char *dest)
{
	int		i;
	int		j;

	i = ft_concat(0, dest, strs[0]);
	j = 1;
	while (j < size)
	{
		i = ft_concat(i, dest, sep);
		i = ft_concat(i, dest, strs[j]);
		j++;
	}
	dest[i] = '\0';
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int		ft_get_dim(int size, char **strs)
{
	int		i;
	int		dim;

	i = 0;
	dim = 0;
	while (i < size)
	{
		dim += ft_strlen(strs[i]);
		i++;
	}
	return (dim);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		dim;

	if (size == 0)
	{
		if (!(str = malloc(1)))
			return (0);
		*str = '\0';
		return (str);
	}
	dim = ft_get_dim(size, strs);
	if (!(str = (char *)(malloc(dim + ((size - 1) * ft_strlen(sep))))))
		return (0);
	ft_do_concat(size, strs, sep, str);
	return (str);
}
