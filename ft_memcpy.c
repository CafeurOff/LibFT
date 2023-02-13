/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:02:46 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/13 11:23:14 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	char		*m;
	const char	*s;

	m = (char *) dest;
	s = (char *) src;
	i = 0;
	while (i < size)
	{
		*m++ = *s++;
		i++;
	}
	return (dest);
}
