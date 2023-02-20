/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:32:43 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/20 17:44:07 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[j] != '\0')
		j++;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (j < size)
	{
		dst[i] = '\0';
		return (i);
	}
	else
		return (j);
}
