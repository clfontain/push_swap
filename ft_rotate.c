/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:58:58 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:37:32 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_rotate_a(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = *stack;
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		*stack = front->next;
		last->next = front;
		front->next = NULL;
	}	
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = *stack;
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		*stack = front->next;
		last->next = front;
		front->next = NULL;
	}	
	write(1, "rb\n", 3);
}

void	ft_r_rotate_a(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = *stack;
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		*stack = front->next;
		last->next = front;
		front->next = NULL;
	}	
}

void	ft_r_rotate_b(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = *stack;
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		*stack = front->next;
		last->next = front;
		front->next = NULL;
	}	
}

void	ft_rr(t_list **stacka, t_list **stackb)
{
	ft_r_rotate_a(stacka);
	ft_r_rotate_b(stackb);
	write(1, "rr\n", 3);
}
