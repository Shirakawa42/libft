/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:01:33 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/10 13:02:01 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule, const char *aiguille)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	if (!*meule && !*aiguille)
		return ((char*)meule);
	while (*meule && *aiguille)
	{
		if (*meule == *aiguille)
		{
			s1 = (char*)meule;
			s2 = (char*)aiguille;
			while (*s1 && *s2 && *s1 == *s2)
			{
				s1++;
				s2++;
				i++;
			}
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
