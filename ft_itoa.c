/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:37:33 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/10 12:04:43 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrev(char *str, int a, int n, int num)
{
	while (num >= 0)
	{
		str[num] = (a * (n % 10)) + 48;
		n /= 10;
		num--;
	}
	if (a == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num;
	int		a;
	int		len;

	a = 1;
	len = 1;
	if (n < 0)
	{
		len = 2;
		a = -1;
	}
	num = n;
	while (num / 10 != 0)
	{
		num /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = len - 1;
	str = ft_strrev(str, a, n, num);
	return (str);
}
