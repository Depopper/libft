/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <depopper0526@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:59:00 by aschafer          #+#    #+#             */
/*   Updated: 2015/11/30 00:59:00 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	isneg;

	result = 0;
	isneg = 0;
	while (*str == ' ' || ft_isescaped(*str))
		str++;
	if (*str == '-' || *str == '+')
		isneg = (*(str++) == '-') ? 1 : 0;
	while (*str && ft_isdigit(*str))
		result = result * 10 + (*(str++) - 48);
	return (isneg ? result * -1 : result);
}
