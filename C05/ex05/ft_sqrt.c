/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:39:29 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/02 10:21:22 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculate(int nb, long double approx, long double prev_approx)
{
	if (approx * approx <= 2147483647 && (int)approx * (int)approx == nb)
		return ((int)approx);
	if ((int)approx == (int)prev_approx)
		return (0);
	else
		return (calculate(nb, (approx + nb / approx) / 2, approx));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (calculate(nb, 50, 0));
}
