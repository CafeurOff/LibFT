/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:14:28 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/13 10:42:42 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	starttrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1 == set)
				i++;
			j++;
		}
	}
	return (i);
}

static	size_t	endtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
			if (s1 == set)
				i--;
		j--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	o;
	char	*k;

	i = 0;
	j = endtrim(s1, set);
	o = starttrim(s1, set);
	k = malloc(sizeof(char *) * j);
	if (k == NULL)
		return (NULL);
	while (i < (j - o))
	{
		k[i] = s1[i + o];
		i++;
	}
	k[i] = '\0';
	return (k);
}
