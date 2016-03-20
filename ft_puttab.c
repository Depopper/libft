/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <depopper0526@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 00:59:01 by aschafer          #+#    #+#             */
/*   Updated: 2016/03/03 00:59:01 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab)
{
	int i;

	i = 0;
	if(!tab)
	{
		ft_putstr_color("Pointer not allocated or recently free'd", 3);
		return ;
	}
	if (!tab[i])
		ft_putstr_color("No entries found !", 3);
	while (tab[i])
	{
		ft_putnbr(i);
		ft_putstr(" : ");
		ft_putendl(tab[i++]);
	}
}