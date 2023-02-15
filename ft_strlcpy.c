/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:51:52 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/15 11:36:18 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (size <= 0)
		return (0);
	while (src[j] != '\0')
		j++;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (j > size)
	{
		dst[i] = '\0';
		return (j);
	}
	else
		return (src[i]);
}
