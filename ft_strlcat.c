/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:19:07 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/07 17:03:12 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		destmax;

	j = 0;
	while (dest[j] && j < n)
		j++;
	destmax = j;
	j = 0;
	i = ft_strlen(dest);
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (destmax < n)
		dest[i + j] = '\0';
	return (destmax + ft_strlen(src));
}
