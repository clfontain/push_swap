/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:03:01 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:38:44 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_reverse_rotate_a(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = NULL;
		last = (*stack);
		while (last->next != NULL)
		{
			front = last;
			last = last->next;
		}
		front->next = NULL;
		last->next = (*stack);
		(*stack) = last;
	}
	write(1, "rra\n", 4);
}

void	ft_reverse_rotate_b(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = NULL;
		last = (*stack);
		while (last->next != NULL)
		{
			front = last;
			last = last->next;
		}
		front->next = NULL;
		last->next = (*stack);
		*stack = last;
	}
	write(1, "rrb\n", 4);
}

void	ft_r_reverse_rotate_a(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = NULL;
		last = *stack;
		while (last->next != NULL)
		{
			front = last;
			last = last->next;
		}
		front->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

void	ft_r_reverse_rotate_b(t_list **stack)
{
	t_list	*front;
	t_list	*last;

	if ((*stack)->next != NULL)
	{
		front = NULL;
		last = *stack;
		while (last->next != NULL)
		{
			front = last;
			last = last->next;
		}
		front->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

void	ft_rrr(t_list **stacka, t_list **stackb)
{
	ft_r_reverse_rotate_a(stacka);
	ft_r_reverse_rotate_b(stackb);
	write(1, "rrr\n", 4);
}
