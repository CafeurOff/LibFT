/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:01:13 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/13 11:54:40 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	a;
	size_t	n;

	i = 0;
	a = 0;
	n = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (little[i] != '\0')
		i++;
	while (big[a] != '\0')
	{
		while (big[a] == little[n] && len < n)
		{
			if (big[a] == little[i - 1])
				return ((char *)(big + (a - i)));
			a++;
			n++;
		}
		a++;
	}
	return (NULL);
}
