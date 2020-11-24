/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:54:23 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/30 11:54:25 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr_u;

	if (nb < 0)
	{
		nbr_u = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		nbr_u = (unsigned int)nb;
	if (nbr_u >= 10)
	{
		ft_putnbr(nbr_u / 10);
		ft_putnbr(nbr_u % 10);
	}
	else
		ft_putchar(nbr_u + '0');
}
