/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:51:32 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/13 11:17:32 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0')
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}

int	ft_tchoupy(char **strs, char *sep, int size)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	lenght += (size - 1) * ft_strlen(sep);
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str = NULL;
		return (str);
	}
	str = malloc(sizeof(char) * ft_tchoupy(strs, sep, size) + 1);
	if (str == NULL)
		return (str);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < (size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
