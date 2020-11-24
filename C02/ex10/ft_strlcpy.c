/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 21:49:29 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/28 16:34:59 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int dsize)
{
	char			*psrc;
	unsigned int	i;

	psrc = src;
	i = dsize;
	if (i != 0)
		while (--i != 0)
			if ((*dest++ = *src++) == '\0')
				break ;
	if (i == 0)
	{
		if (dsize != 0)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - psrc - 1);
}
