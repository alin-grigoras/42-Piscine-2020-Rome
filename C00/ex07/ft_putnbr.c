/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 09:16:16 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/09 09:16:21 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int		u_nb;
	unsigned long int	n_c;
	int					n;
	char				c;

	n_c = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		u_nb = nb * -1;
	}
	else
		u_nb = nb;
	while (u_nb % (n_c * 10) != u_nb)
	{
		n_c *= 10;
	}
	while (n_c > 0)
	{
		n = (u_nb / n_c) % 10;
		c = '0' + n;
		write(1, &c, 1);
		n_c /= 10;
	}
}
