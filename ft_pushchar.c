/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <depopper0526@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:59:01 by aschafer          #+#    #+#             */
/*   Updated: 2015/11/30 00:59:01 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pushchar(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	s[i++] = c;
	if (s[i])
		s[i] = 0;
	return (s);
}
