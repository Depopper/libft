/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 14:58:06 by aschafer          #+#    #+#             */
/*   Updated: 2016/04/14 15:09:08 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	copy_tab(char *str, char *new_str, char *buf, int index)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] && i < index)
	{
		new_str[i] = str[i];
		i++;
	}
	while (buf[j])
	{
		new_str[i + j] = buf[j];
		j++;
	}
	while (str[i])
	{
		new_str[i + j] = str[i];
		i++;
	}
}

void			ft_tab_insert(char **str, int index, char *buf)
{
	char *new_str;

	if (!*str || !buf)
		return ;
	if (!(new_str = (char *)ft_memalloc(sizeof(char) * (1 + ft_strlen(*str) +
		ft_strlen(buf)))))
		return ;
	copy_tab(*str, new_str, buf, index);
	free(*str);
	*str = new_str;
}
