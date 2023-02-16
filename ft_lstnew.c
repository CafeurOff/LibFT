/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:35:58 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/16 11:41:49 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	size_t	i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char *) * content);
	while (s[i] != '\0')
		i++;
	return (content);
}
