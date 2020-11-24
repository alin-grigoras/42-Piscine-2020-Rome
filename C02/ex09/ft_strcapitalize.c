/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:33:38 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/27 21:20:26 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_cap(char *str, int capitalize)
{
	char c;

	c = *(str);
	{
		if (c >= ' ' && c <= '~')
			if (c >= 'A' && c <= 'Z')
				if (capitalize == 0)
					*str = c + ('a' - 'A');
				else
					capitalize = 0;
			else if (c >= 'a' && c <= 'z')
			{
				if (capitalize == 1)
					*str = c - ('a' - 'A');
				capitalize = 0;
			}
			else if (c >= '0' && c <= '9')
				capitalize = 0;
			else
				capitalize = 1;
		else
			capitalize = 0;
	}
	return (capitalize);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capitalize;

	capitalize = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		capitalize = check_cap(str + i, capitalize);
		i++;
	}
	return (str);
}
