/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:35:03 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/11 16:37:56 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_nbrlen(int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char		*ft_min_int(void)
{
	char	*theint;

	theint = (char*)malloc(sizeof(char) * 12);
	theint[0] = '-';
	theint[1] = '2';
	theint[2] = '1';
	theint[3] = '4';
	theint[4] = '7';
	theint[5] = '4';
	theint[6] = '8';
	theint[7] = '3';
	theint[8] = '6';
	theint[9] = '4';
	theint[10] = '8';
	theint[11] = '\0';
	return (theint);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		h;

	i = 0;
	if (n == -2147483648)
		return (ft_min_int());
	if ((str = (char*)malloc(sizeof(char) * (ft_nbrlen(n) + 1))) == 0)
		return (NULL);
	h = ft_nbrlen(n);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	str[h] = '\0';
	while (i < h)
	{
		h--;
		str[h] = ((n % 10) + 48);
		n = n / 10;
	}
	return (str);
}
