/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:32:03 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:59:26 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_swap_pointer(t_list **p1, t_list *p2)
{
	int	p;
	int	place;

	p = (*p1)->content;
	(*p1)->content = p2->content;
	p2->content = p;
	place = (*p1)->place;
	(*p1)->place = p2->place;
	p2->place = place;
}

void	ft_swap_a(t_list **stack)
{
	t_list	*temp;

	if ((*stack)->next != NULL)
	{
		temp = (*stack)->next;
		ft_swap_pointer(stack, temp);
	}
	write(1, "sa\n", 3);
}	

void	ft_swap_b(t_list **stack)
{
	t_list	*temp;

	if ((*stack)->next != NULL)
	{
		temp = (*stack)->next;
		ft_swap_pointer(stack, temp);
	}
	write(1, "sb\n", 3);
}

void	ft_ss(t_list **stacka, t_list **stackb)
{
	t_list	*temp;

	if ((*stacka)->next != NULL)
	{
		temp = (*stacka)->next;
		ft_swap_pointer(stacka, temp);
	}
	if ((*stackb)->next != NULL)
	{
		temp = (*stackb)->next;
		ft_swap_pointer(stackb, temp);
	}
	write(1, "ss\n", 3);
}
