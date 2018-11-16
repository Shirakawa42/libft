/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:17:48 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/14 16:59:08 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float		ft_atof(const char *str)
{
	float		nbr;
	int			i;
	float		isneg;
	float		j;

	isneg = 1;
	nbr = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + ((unsigned int)str[i++] - 48);
	if (str[i] && str[i] == '.')
	{
		i++;
		j = 10;
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			nbr += (float)((unsigned int)str[i++] - 48) / j;
			j *= 10;
			if (j >= 1000000000)
				break ;
		}
	}
	return (nbr * isneg);
}
