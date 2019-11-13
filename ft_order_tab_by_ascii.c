/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_tab_by_ascii.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:00:30 by lvasseur          #+#    #+#             */
/*   Updated: 2019/11/13 17:48:13 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_order_tab_by_ascii(char ***tab, int nbstr)
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
		tmp = ft_strdup((*tab)[t]);
		free((*tab)[t]);
		(*tab)[t] = (*tab)[i];
		(*tab)[i] = tmp;
		current_start++;
		i++;
	}
}
