/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_short.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:21:53 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:45:40 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	find_the_next(t_list **stackb, int next)
{
	int		index;
	t_list	*temp;

	index = -1;
	temp = *stackb;
	while ((*stackb)->place != next)
	{
		(*stackb) = (*stackb)->next;
	}
	index = (*stackb)->index;
	*stackb = temp;
	return (index);
}

void	push_the_next(t_list **stacka, t_list **stackb, int next)
{
	int	index;
	int	size;

	while (next >= 0)
	{
		size = ft_lstsize(stackb);
		ft_setindex(stackb);
		index = find_the_next(stackb, next);
		while ((*stackb)->place != next)
		{
			if (index > size / 2)
				ft_reverse_rotate_b(stackb);
			if (index <= size / 2)
				ft_rotate_b(stackb);
		}
		ft_push_a(stacka, stackb);
		next--;
	}
}

void	final_short(t_list **stacka, t_list **stackb, int block, int size)
{
	int		temp;

	temp = 0;
	temp = size - 3;
	while (ft_lstsize(stacka) > 3)
	{
		if ((*stacka)->place < temp)
			ft_push_b(stackb, stacka);
		else
			ft_rotate_a(stacka);
		size --;
		block--;
	}
	if (ft_lstsize(stacka) == 3)
	{
		ft_sort_3_numb(stacka);
		temp--;
	}
	else if ((*stacka)->place > (*stacka)->next->place)
		ft_swap_a(stacka);
	push_the_next(stacka, stackb, temp);
}
