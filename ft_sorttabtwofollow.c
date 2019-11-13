/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttabtwofollow.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:03:51 by lvasseur          #+#    #+#             */
/*   Updated: 2019/11/13 18:04:20 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sorttabtwofollow(char ***tab, char ***follower,
				char ***otherfollower, int nbstrings)
{
	char	*tmp;
	int		i;
	char	**taba;
	char	**tabb;
	char	**tabc;

	taba = *tab;
	tabb = *follower;
	tabc = *otherfollower;
	i = 0;
	while (++i < nbstrings)
		if (ft_strcmp(taba[i], taba[i - 1]) < 0)
		{
			tmp = taba[i];
			taba[i] = taba[i - 1];
			taba[i - 1] = tmp;
			tmp = tabb[i];
			tabb[i] = tabb[i - 1];
			tabb[i - 1] = tmp;
			tmp = tabb[i];
			tabb[i] = tabb[i - 1];
			tabb[i - 1] = tmp;
			i = 0;
		}
}
