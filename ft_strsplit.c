/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:23:31 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/15 14:21:32 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_len(const char *str, int i, char c)
{
	int x;

	x = 0;
	while (str[i] != c && str[i])
	{
		x++;
		i++;
	}
	return (x);
}

static int		ft_nb_of_wd(char *str, char c)
{
	int i;
	int word;
	int nbwords;

	i = 0;
	nbwords = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			i++;
			word = 1;
		}
		if (str[i] == c)
		{
			nbwords += (word == 1) ? 1 : 0;
			word = 0;
			i++;
		}
	}
	return (nbwords);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**res;
	int		i;
	int		x;
	int		h;

	i = 0;
	x = 0;
	if ((res = malloc(sizeof(char**) * (ft_nb_of_wd((char*)s, c) + 1))) == 0)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			h = 0;
			if ((res[x] = malloc(sizeof(char) * ft_len(s, i, c) + 1)) == 0)
				return (0);
			while (s[i] != c && s[i])
				res[x][h++] = s[i++];
			res[x++][h] = '\0';
		}
	}
	res[x] = 0;
	return (res);
}
