/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_extend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:36:17 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/08 18:36:19 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_short_types.h>
#include <stdlib.h>

#include "ft_str.h"

char	*ft_extend_array(char *orig, char *n_cont, UINT old_len, UINT len)
{
	char *dest;

	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (orig != NULL)
		ft_str_n_copy(dest, orig, old_len);
	ft_str_n_copy(dest + old_len, n_cont, (UINT)(len - old_len));
	return (dest);
}
