/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:25:17 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/14 10:34:07 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*m;
	size_t	i;

	m = (char *) ptr;
	i = 0;
	while (i < count)
	{
		m[i] = (char)value;
		i++;
	}
	return (ptr);
}
