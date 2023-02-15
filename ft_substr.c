/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:38:17 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/15 17:18:04 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < start)
		i++;
	while (s[i] != '\0' && j < len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	if (j == len)
		str[j] = '\0';
	return (str);
}
