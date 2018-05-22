/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:32:28 by lvasseur          #+#    #+#             */
/*   Updated: 2018/05/22 15:55:48 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddr(uint64_t addr)
{
	if (addr > 16)
	{
		ft_putaddr(addr / 16);
		ft_putaddr(addr % 16);
	}
	else if (addr < 10)
		ft_putchar(addr + '0');
	else
		ft_putchar(addr + 'a' - 10);
}
