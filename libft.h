/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:13:55 by lvasseur          #+#    #+#             */
/*   Updated: 2016/11/04 16:16:54 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
