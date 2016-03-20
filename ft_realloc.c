/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 18:46:59 by aschafer          #+#    #+#             */
/*   Updated: 2016/02/25 18:47:00 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (ptr && size > 0)
	{
		new_ptr = (void *)malloc(size);
		ft_memcpy(new_ptr, ptr, ft_strlen(ptr));
		return (new_ptr);
	}
	return (ptr);
}
