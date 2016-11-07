/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:24:18 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/07 14:30:55 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
