/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:56:07 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/09 15:07:26 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s) - 1;
	if (!*s)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[i])
		j--;
	if ((str = (char*)malloc(sizeof(char) * (j - i + 2))) == 0)
		return (NULL);
	k = 0;
	while (i < j + 1)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
