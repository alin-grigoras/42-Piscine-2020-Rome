/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 09:03:36 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/12 09:06:57 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (i < 2)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_three_diff_chars(char a, char b, char c)
{
	return (a != b && b != c && a != c);
}

int		ft_char_is_printable(char c)
{
	return (!(c <= 31 && c == 127));
}

int		ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_is_printable(char c)
{
	return (!(c <= 31 || c == 127));
}
