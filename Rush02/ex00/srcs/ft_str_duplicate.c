/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:39:18 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/08 18:39:19 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_str.h"

char	*ft_str_duplicate(char *src)
{
	int		length;
	int		index;
	char	*dest;

	length = ft_str_length(src);
	index = 0;
	if ((dest = (char *)malloc((length + 1) * sizeof(char))) == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_str_n_duplicate(char *str, int n)
{
	int		index;
	int		length;
	char	*dup;

	length = 0;
	while (str[length])
		length++;
	if (length > n)
		length = n;
	if (!(dup = malloc((length + 1) * sizeof(char))))
		return (NULL);
	index = 0;
	while (index < length)
	{
		dup[index] = str[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
