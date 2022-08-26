/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:18:43 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:39:49 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_push_a(t_list **stacka, t_list **stackb)
{
	t_list	*temp;

	if (*stackb == NULL)
		return ;
	temp = *stackb;
	*stackb = (*stackb)->next;
	temp->next = *stacka;
	*stacka = temp;
	(write(1, "pa\n", 3));
}

void	ft_push_b(t_list **stackb, t_list **stacka)
{
	t_list	*temp;

	if (*stacka == NULL)
		return ;
	temp = *stacka;
	*stacka = (*stacka)->next;
	temp->next = *stackb;
	*stackb = temp;
	(write(1, "pb\n", 3));
}
