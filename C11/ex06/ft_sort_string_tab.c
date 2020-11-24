/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:15:45 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/11 19:15:49 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		index;
	int		size;
	int		swapped;

	size = 0;
	while (tab[size])
		size++;
	while (1)
	{
		index = 0;
		swapped = 0;
		while (index < size - 1)
		{
			if (ft_strcmp(tab[index], tab[index + 1]) > 0)
			{
				ft_swap(&tab[index], &tab[index + 1]);
				swapped = 1;
			}
			index++;
		}
		if (!swapped)
			break ;
	}
}
