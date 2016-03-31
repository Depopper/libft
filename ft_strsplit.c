/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:59:01 by aschafer          #+#    #+#             */
/*   Updated: 2016/03/20 18:36:56 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		len;
	int		wi;
	char	**as;

	if (!s || !*s)
		return (NULL);
	if (!(as = ft_memalloc(sizeof(as) * (ft_countwords(s, c) + 1))))
		return (NULL);
	i = 0;
	len = 0;
	wi = 0;
	while (s[i])
	{
		while (s[i + len] && s[i + len] != c)
			len++;
		if (len)
			as[wi++] = ft_strsub(s, i, len);
		i += len ? len : 1;
		len = 0;
	}
	as[wi] = NULL;
	return (as);
}
