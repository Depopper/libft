/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <depopper0526@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:59:00 by aschafer          #+#    #+#             */
/*   Updated: 2015/11/30 00:59:00 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *new;

	new = malloc(sizeof(unsigned char) * len);
	ft_memcpy(new, src, len);
	ft_memcpy(dst, new, len);
	free(new);
	return (dst);
}
