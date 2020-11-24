/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:32:22 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/24 15:55:53 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_stampa_riga(char sinistra, char centro, char destra, int size)
{
	ft_putchar(sinistra);
	while (size-- > 2)
		ft_putchar(centro);
	if (size == 1)
		ft_putchar(destra);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_stampa_riga('/', '*', '\\', x);
	while (y-- > 2)
		ft_stampa_riga('*', ' ', '*', x);
	if (y == 1)
		ft_stampa_riga('\\', '*', '/', x);
}
