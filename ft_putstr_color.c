/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:13:20 by aschafer          #+#    #+#             */
/*   Updated: 2016/01/18 16:13:29 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"
#include "libft.h"

static void	color_write(char *color, char *str)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(RESET);
}

void		ft_putstr_color(char *str, int color)
{
	char *colors[] = {KNRM, KBLU, KGRN, KRED, KYEL, KMAG, KCYN, KWHT, RESET};

	color_write(colors[color], str);
}
