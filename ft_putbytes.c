/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 17:48:19 by aschafer          #+#    #+#             */
/*   Updated: 2015/12/20 18:03:48 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbytes(unsigned long value, size_t n)
{
	int i;
	int multiplicator;

	if (n <= 0)
		return ;
	i = 0;
	multiplicator = ((int)n * 8) - 1;
	while (i < ((int)n * 8))
		ft_putchar((value << i++) & ft_pow(2, multiplicator) ? '1' : '0');
}
