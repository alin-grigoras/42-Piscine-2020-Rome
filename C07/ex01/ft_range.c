/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:13:06 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/04 21:08:38 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int i;

	if (min >= max)
		return (0);
	if (!(n = (int *)(malloc((max - min) * sizeof(int)))))
		return (0);
	i = 0;
	while (min < max)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
