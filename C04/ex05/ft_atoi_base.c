/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:47:56 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/30 11:48:01 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_error_in_base(char *base)
{
	int i;
	int i_check;

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
	int i;

	i = 0;
	while (*(str + i) != 0)
		i++;
	return (i);
}

char	*is_in_base(char *base, char *to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	n;
	int				s;
	int				i;

	n = 0;
	s = 1;
	if (check_error_in_base(base))
	{
		i = 0;
		while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
			i++;
		while (*(str + i) == '-' || *(str + i) == '+')
		{
			if (*(str + i) == '-')
				s *= -1;
			i++;
		}
		while (is_in_base(base, str + i))
		{
			n *= ft_strlen(base);
			n += (unsigned int)(is_in_base(base, str + i) - base);
			i++;
		}
	}
	return (int)(n * s);
}
