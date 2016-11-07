/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:18:30 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/07 13:28:23 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	i = 0;
	s2 = (unsigned char*)malloc(sizeof(unsigned char) *
		(ft_strlen((const char*)s1) + 1));
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}
