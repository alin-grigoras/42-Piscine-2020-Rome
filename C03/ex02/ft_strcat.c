/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:59:40 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/29 13:22:06 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *charptr;
	char *charptrsrc;

	charptr = dest;
	charptrsrc = src;
	while (*charptr)
		charptr++;
	while (*charptrsrc)
	{
		*charptr = *charptrsrc;
		charptrsrc++;
		charptr++;
	}
	*charptr = 0;
	return (dest);
}
