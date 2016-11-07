/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:57:25 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/07 13:58:42 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*mem2;

	mem2 = (char*)mem;
	if ((mem2 = malloc(size)) == NULL)
		return (NULL);
	size = size - 1;
	while (size != -1)
		mem2[size--] = 0;
	return (mem);
}
