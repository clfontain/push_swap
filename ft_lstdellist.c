/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:19:27 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:05:25 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_lstdellist(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return ;
	while (lst)
	{	
		p = lst;
		lst = lst->next;
		free (p);
	}	
}
