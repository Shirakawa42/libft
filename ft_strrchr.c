/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:19:22 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/07 13:20:49 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	*s + ft_strlen(s);
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			*t = *s;
			return (t);
		}
		*s--;
	}
	return (NULL);
}
