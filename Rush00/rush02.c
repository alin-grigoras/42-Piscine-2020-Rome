/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbus <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:26:40 by mbus              #+#    #+#             */
/*   Updated: 2020/10/24 19:26:39 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	stampa_linea(char sx, char mm, char dx, int size)
{
	ft_putchar(sx);
	while (size-- > 2)
		ft_putchar(mm);
	if (size == 1)
		ft_putchar(sx);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	stampa_linea('A', 'B', 'C', x);
	while (y-- > 2)
		stampa_linea('B', ' ', 'B', x);
	if (y == 1)
		stampa_linea('C', 'B', 'C', x);
}
