/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_small_numb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:13:33 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:21:27 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	find_the_lowest(t_list **stacka, int *lowest)
{
	t_list	*temp;

	temp = *stacka;
	(*lowest) = (*stacka)->content;
	while ((*stacka))
	{
		if ((*lowest) > (*stacka)->content)
			(*lowest) = (*stacka)->content;
		(*stacka) = (*stacka)->next;
	}
	*stacka = temp;
}

int	find_the_highest(t_list **stacka)
{
	t_list	*temp;
	int		highest;

	temp = *stacka;
	highest = (*stacka)->content;
	while (*stacka)
	{
		if (highest < (*stacka)->content)
			highest = (*stacka)->content;
		*stacka = (*stacka)->next;
	}
	*stacka = temp;
	return (highest);
}

void	ft_push_highest(t_list **stacka, t_list **stackb, int highest)
{
	t_list	*temp;
	int		trig;

	trig = 0;
	temp = *stacka;
	while (temp)
	{
		if (highest == temp->content)
		{
			if (trig == 1)
				ft_swap_a(stacka);
			if (trig == 2)
			{
				ft_rotate_a(stacka);
				ft_swap_a(stacka);
			}	
			if (trig == 3)
				ft_reverse_rotate_a(stacka);
			ft_push_b(stackb, stacka);
		}	
		temp = temp->next;
		trig++;
	}	
}

void	ft_push_4_low(t_list **stacka, t_list **stackb, int *lowest, int trig)
{
	t_list	*temp;

	temp = *stacka;
	while (temp)
	{
		if ((*lowest) == temp->content)
		{
			if (trig == 1)
				ft_swap_a(stacka);
			if (trig == 2)
			{
				ft_rotate_a(stacka);
				ft_swap_a(stacka);
			}	
			if (trig == 3)
				ft_reverse_rotate_a(stacka);
			ft_push_b(stackb, stacka);
		}	
		temp = temp->next;
		trig++;
	}		
}

void	ft_push_5_high(t_list **stacka, t_list **stackb, int *lowest, int trig)
{
	t_list	*temp;

	temp = *stacka;
	while (++trig, temp)
	{
		if ((*lowest) == temp->content)
		{
			if (trig == 1)
				ft_swap_a(stacka);
			if (trig == 2)
			{
				ft_rotate_a(stacka);
				ft_swap_a(stacka);
			}	
			if (trig == 3)
			{
				ft_reverse_rotate_a(stacka);
				ft_reverse_rotate_a(stacka);
			}
			if (trig == 4)
				ft_reverse_rotate_a(stacka);
			ft_push_b(stackb, stacka);
		}	
		temp = temp->next;
	}		
}
