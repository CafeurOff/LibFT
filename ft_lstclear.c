/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduthill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:23:21 by lduthill          #+#    #+#             */
/*   Updated: 2023/02/20 18:30:11 by lduthill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lstm void (*del)(void*))
{
    t_list  *tmp;
    
    if(!lst)
        return ;
    if (*del)
    {
      tmp = (*del)(lst->content);
      tmp->(void*)(*del); 
    }
    free(lst);
    /*
        Deux heures que je bloque sur cette merde
    */
}