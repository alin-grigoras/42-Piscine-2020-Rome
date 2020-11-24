/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:04:28 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/31 16:37:40 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		controllo_formato(char *str);
int		**init(char *str);
int		controllo_rec(int **tabella, int riga, int colonna, int i);
void	stampa_tab(int **tabella);

int		main(int argc, char **argv)
{
	int **tabella;
	int i;

	i = 0;
	if (argc != 2 || !controllo_formato(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tabella = init(argv[1]);
	if (!controllo_rec(tabella, 1, 1, 0))
		write(1, "Error\n", 6);
	while (i < 6)
	{
		free(tabella[i]);
		i++;
	}
	free(tabella);
	return (0);
}
