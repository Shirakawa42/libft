/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_tab_by_ascii_two_follow.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:27:07 by lvasseur          #+#    #+#             */
/*   Updated: 2019/11/13 17:49:04 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	moves(int t, int i, char ***tab)
{
	char	*tmp;

	tmp = ft_strdup((*tab)[t]);
	free((*tab)[t]);
	(*tab)[t] = (*tab)[i];
	(*tab)[i] = tmp;
}

void		ft_order_tab_by_ascii_two_follow(char ***tab,
					int nbstr, char ***tabb, char ***tabc)
{
	int		i;
	int		j;
	int		current_start;
	char	*tmp;
	int		t;

	current_start = 0;
	tmp = NULL;
	i = 0;
	while (i < nbstr)
	{
		j = current_start - 1;
		t = current_start;
		while (++j < nbstr)
			if (t != j && ft_strcmp((*tab)[t], (*tab)[j]))
				t = j;
		moves(t, i, tab);
		moves(t, i, tabb);
		moves(t, i, tabc);
		current_start++;
		i++;
	}
}
