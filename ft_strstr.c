/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <depopper0526@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:59:01 by aschafer          #+#    #+#             */
/*   Updated: 2015/11/30 00:59:01 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	if (!*s2)
		return ((char*)s1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j] && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char*)(s1 + i));
		j = 0;
		i++;
	}
	return (NULL);
}
