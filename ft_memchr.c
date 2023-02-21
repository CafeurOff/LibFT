/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:05:23 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/21 11:05:37 by lduthill         ###   ########.fr       */
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
