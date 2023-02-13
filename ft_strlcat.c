/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:55:14 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/13 11:06:54 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{			
	unsigned int	a;
	unsigned int	i;

	a = 0;
	i = 0;
	while (dst[a] != '\0')
		a++;
	while (i < size)
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[a + i] = '\0';
	return (size);
}
