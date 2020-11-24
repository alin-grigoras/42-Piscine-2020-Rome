/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okatsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:31:04 by okatsala          #+#    #+#             */
/*   Updated: 2020/10/24 19:21:24 by okatsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line_comb(char begin, char middle, char last, int len)
{
	ft_putchar(begin);
	while (len-- > 2)
	{
		ft_putchar(middle);
	}
	if (len == 1)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	ft_line_comb('A', 'B', 'C', x);
	while (y-- > 2)
	{
		ft_line_comb('B', ' ', 'B', x);
	}
	if (y == 1)
	{
		ft_line_comb('A', 'B', 'C', x);
	}
}
