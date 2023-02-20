/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:34:51 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/20 17:43:03 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*test;
	
	test = malloc(sizeof(t_list));
	if (!test)
		return (NULL);
	test->next = NULL;
	test->content = content;
	return (test);
}
