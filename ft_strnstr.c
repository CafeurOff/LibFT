/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:15:08 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/17 16:18:57 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (big[a] != '\0' && len > a + i)
	{
		if (big[a + i] == little[i])
		{
			if (little[i + 1] == '\0')
				return ((char *)(big + a));
			i++;
		}
		else
		{
			i = 0;
			a++;
		}
	}
	return (NULL);
}
