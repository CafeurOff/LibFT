/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:26:20 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/20 17:42:18 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	char	*ptr;

	if (nmb == 0 || size == 0)
		return (malloc(0));
	if (((nmb * size) / size) != nmb || ((nmb * size) / nmb) != size)
		return (NULL);
	ptr = malloc(size * nmb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmb * size));
	return (ptr);
}
