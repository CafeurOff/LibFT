/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roroca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:33:36 by roroca            #+#    #+#             */
/*   Updated: 2023/02/22 16:28:35 by roroca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str, int neg, int n, int len)
{
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = (neg * (n % 10)) + 48;
		n /= 10;
		len--;
	}
	if (neg == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		nbr;
	int		neg;
	int		len;
	char	*str;

	nbr = n;
	neg = 1;
	len = 0;
	if (n < 0)
	{
		len++;
		neg = -1;
	}
	while (nbr >= 10 || nbr <= -10)
	{
		nbr /= 10;
		len++;
	}
	len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = ft_strrev(str, neg, n, len);
	return (str);
}
