/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:35:55 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/14 10:34:35 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t ec, size_t es)
{
	char	*s;
	size_t	i;

	i = 0;
	s = malloc(sizeof(es) * ec);
	if (!s)
		return (NULL);
	while (i < ec)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
