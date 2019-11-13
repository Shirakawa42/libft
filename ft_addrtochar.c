/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addrtochar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:55:44 by lvasseur          #+#    #+#             */
/*   Updated: 2019/11/13 16:58:36 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*init_str(void)
{
	char	*str;
	int		i;

	str = (char*)malloc(sizeof(char) * 17);
	i = 0;
	while (i < 16)
		str[i++] = '0';
	str[16] = '\0';
	return (str);
}

char		*ft_addrtochar(uint64_t addr)
{
	char		*str;
	int			i;
	uint64_t	tmp;

	if (addr == 0)
		return ("                ");
	str = init_str();
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
