/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:54:49 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/30 11:54:53 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_error_in_base(char *base)
{
	int	i;
	int	i_check;

	i = 0;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-'
			|| *(base + i) <= 31)
			return (0);
		i_check = 1;
		while (*(base + i + i_check))
		{
			if (*(base + i + i_check) == *(base + i))
				return (0);
			i_check++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != 0)
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int lenbase;
	unsigned int nbr_unsigned;

	if (check_error_in_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsigned = (unsigned int)(-1 * nbr);
		}
		else
			nbr_unsigned = (unsigned int)nbr;
		lenbase = ft_strlen(base);
		if (nbr_unsigned >= lenbase)
		{
			ft_putnbr_base(nbr_unsigned / lenbase, base);
			ft_putnbr_base(nbr_unsigned % lenbase, base);
		}
		else
		{
			write(1, base + nbr_unsigned, 1);
		}
	}
}
