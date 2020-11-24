/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:36:52 by agrigora          #+#    #+#             */
/*   Updated: 2020/11/08 18:36:53 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include "ft_is.h"
#include "ft_short_types.h"

ULNG	ft_atoi_strict(char *str)
{
	ULNG	result;

	while (ft_is_whitespace(*str))
		str++;
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	if (*str == '\0')
		return (result);
	return (-1);
}
