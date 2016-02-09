/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 23:38:20 by aschafer          #+#    #+#             */
/*   Updated: 2016/01/08 23:47:03 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_delim(char *str, const char *delim)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (!str)
		return (-1);
	if (!delim)
		return (ft_strlen(str) + 1);
	while (str[i])
	{
		while (str[i + j] == delim[j] && str[i + j])
			j++;
		if (!delim[j])
			return (i + 1);
		j = 0;
		i++;
	}
	return (0);
}
