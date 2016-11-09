/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:19:22 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/09 13:22:52 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	int		i;

	t = (char*)s;
	i = ft_strlen(s);
	while (i != 0)
		s++;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			*t = *s;
			return (t);
		}
		s--;
	}
	return (NULL);
}
