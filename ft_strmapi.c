/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:31:38 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/07 14:32:18 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
