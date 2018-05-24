/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttabfollow.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:31:24 by lvasseur          #+#    #+#             */
/*   Updated: 2018/05/24 14:31:29 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_sorttabfollow(char **tab, char **follower)
{
	char	*tmp;
	int		i;

	i = 1;
	while (tab[i])
	{
		if (ft_strcmp(tab[i], tab[i - 1]) < 0)
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			tmp = follower[i];
			follower[i] = follower[i - 1];
			follower[i - 1] = tmp;
			i = 0;
		}
		i++;
	}
	return (tab);
}
