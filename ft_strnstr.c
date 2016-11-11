/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:19:16 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/11 13:40:26 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *meule, const char *aiguille, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	if (!*meule && !*aiguille)
		return ((char*)meule);
	while (*meule && i < n && *aiguille)
	{
		if (*meule == *aiguille)
		{
			s1 = (char*)meule;
			s2 = (char*)aiguille;
			while (*s1 && *s2++ && *s1 == *s2 && i++ < n)
				s1++;
			if (*s2 == '\0')
				return ((char*)meule);
		}
		meule++;
		i++;
	}
	if (!*aiguille)
		return ((char*)meule);
	return (NULL);
}
