/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:18:50 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/09 13:22:59 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char*)s;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			*t = *s;
			return (t);
		}
		s++;
	}
	return (NULL);
}
