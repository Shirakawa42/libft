/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:12:51 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/08 17:21:58 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (i > 0)
			{
				s++;
				i--;
			}
			return ((void*)s);
		}
		i++;
	}
	return (NULL);
}
