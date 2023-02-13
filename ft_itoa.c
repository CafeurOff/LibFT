/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:13:45 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/10 14:20:18 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str, int rob, int n, int num)
{
	while (num >= 0)
	{
		str[num] = (rob * (n % 10)) + 48;
		n /= 10;
		num--;
	}
	if (rob == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num;
	int		rob;
	int		len;

	rob = 1;
	len = 0;
	if (n < 0)
	{
		len = 1;
		rob = -1;
	}
	num = n;
	while (num % 10 != 0)
	{
		num /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = len - 1;
	str = ft_strrev(str, rob, n, num);
	return (str);
}
