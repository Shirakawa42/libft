/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:56:29 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/10 12:18:15 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char*)src;
	s2 = (char*)dest;
	if (n == 0 || src == dest)
		return (dest);
	while (n > 0 && *s1 != c)
	{
		n--;
		*s2 = *s1;
		s2++;
		s1++;
	}
	*s2 = *s1;
	return (dest);
}
