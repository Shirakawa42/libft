/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:56:29 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/10 15:50:07 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	while (n != 0 && *s1 != c)
	{
		*s2 = *s1;
		s1++;
		s2++;
		n--;
		dest++;
	}
	if (*s1 != c)
		return (NULL);
	dest++;
	return (dest);
}
