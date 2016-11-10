/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:19:10 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/10 13:05:35 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] && s2[i]
			&& i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
