/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:22:32 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/06 19:00:46 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1)
	{
		if (*(char *)(s + i) == c)
			return ((char *)(s + i));
		i++;
	}
	if (*(char *)(s + i) == c)
		return ((char *)(s + i));
	return (0);
}
