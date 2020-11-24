/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:26:07 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/03 11:26:10 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = nb;
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}
