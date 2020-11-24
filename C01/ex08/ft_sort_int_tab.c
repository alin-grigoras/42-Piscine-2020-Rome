/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:47:50 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/26 23:06:17 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = size;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			if (*(tab + j) < *(tab + j - 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j - 1);
				*(tab + j - 1) = temp;
			}
			j++;
		}
		i--;
	}
}
