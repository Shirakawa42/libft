/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:23:49 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/21 13:45:01 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(char) * len)) == 0)
		return (NULL);
	ft_memcpy(str, src, len);
	ft_memcpy(dest, str, len);
	free(str);
	return (dest);
}
