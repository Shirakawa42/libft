/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:19:25 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/09 14:52:17 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule, const char *aiguille)
{
	char	*s1;
	char	*s2;

	if (!*meule || !*aiguille)
		return (NULL);
	while (*meule)
	{
		if (*meule == *aiguille)
		{
			s1 = (char*)meule;
			s2 = (char*)aiguille;
			while (*s1 && *s2 && *s1 == *s2)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return ((char*)meule);
		}
		meule++;
	}
	return (NULL);
}
