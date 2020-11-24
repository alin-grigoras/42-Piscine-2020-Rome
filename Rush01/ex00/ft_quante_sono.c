/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quante_sono.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:51:09 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 17:53:55 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_quante_sono(int *tab_riga, int controllo_nb)
{
	int	i;
	int	quante_sono;
	int maggiore;

	i = 0;
	quante_sono = 1;
	maggiore = tab_riga[0];
	while (i < 3)
	{
		if (maggiore < tab_riga[i + 1])
		{
			quante_sono += 1;
			maggiore = tab_riga[i + 1];
		}
		i++;
	}
	if (quante_sono == controllo_nb)
		return (1);
	else
		return (0);
}
