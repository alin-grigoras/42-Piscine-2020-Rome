/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:48:46 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/24 19:07:58 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_stampa_orizzontale(int x, char sinistra, char centro, char destra)
{
	if (x-- >= 1)
	{
		ft_putchar(sinistra);
		while (x-- >= 2)
			ft_putchar(centro);
		if (x == 0)
			ft_putchar(destra);
		ft_putchar('\n');
	}
}

void	ft_stampa_verticale(int x, int y, char muro)
{
	int i;

	while (y-- > 2)
	{
		ft_putchar(muro);
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		ft_putchar(muro);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		ft_stampa_orizzontale(x, 'A', 'B', 'C');
	ft_stampa_verticale(x, y, 'B');
	if (y >= 2)
		ft_stampa_orizzontale(x, 'C', 'B', 'A');
}
