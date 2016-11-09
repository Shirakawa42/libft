/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:42:12 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/09 15:03:44 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if ((str = (char*)malloc(sizeof(char) * (len - start + 2))) == NULL)
		return (NULL);
	while (start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
