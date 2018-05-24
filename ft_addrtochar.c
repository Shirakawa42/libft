/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addrtochar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:23:39 by lvasseur          #+#    #+#             */
/*   Updated: 2018/05/24 13:55:32 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addrtochar(uint64_t addr)
{
	char		*str;
	int			i;
	uint64_t	tmp;

	if (addr == 0)
		return ("0               ");
	str = (char*)malloc(sizeof(char) * 17);
	i = 0;
	while (i < 16)
	{
		str[i] = '0';
		i++;
	}
	str[16] = '\0';
	i = 15;
	while (addr >= 16)
	{
		tmp = addr % 16;
		if (tmp >= 10)
			str[i] = 'a' + tmp - 10;
		else
			str[i] = '0' + tmp;
		addr /= 16;
		i--;
	}
	tmp = addr % 16;
	if (tmp >= 10)
		str[i] = 'a' + tmp - 10;
	else
		str[i] = '0' + tmp;
	return (str);
}
