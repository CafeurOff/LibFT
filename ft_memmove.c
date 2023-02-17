/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:17:13 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/10 10:10:25 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	if (!src && !dest)
		return (NULL);
	if ((size_t)dest - (size_t)src >= size)
		ft_memcpy(dest, src, size);
	else
	{
		size--;
		while (size > 0)
		{
			*(char *)(dest + size) = *(const char *)(src + size);
			size--;
		}
		*(char *)(dest + size) = *(const char *)(src + size);
	}
	return (dest);
}
