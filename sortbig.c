/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:21:17 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:28:42 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_sort_big(t_list **stacka, t_list **stackb, int size)
{
	int		block;
	int		count;
	int		rest;

	rest = 0;
	if (size <= 100)
	{
		block = size / 5;
		if (size % 5 != 0)
			rest = size % 5;
	}
	if (size > 100)
	{
		block = size / 10;
		if (size % 10 != 0)
			rest = size % 10;
	}
	count = block;
	while (count < (size - rest))
	{
		ft_sortmax(stacka, stackb, count, size);
		count = count + block;
		ft_setindex(stackb);
	}
	final_short(stacka, stackb, block, size);
}

void	ft_sortmax(t_list **stacka, t_list **stackb, int block, int size)
{
	int		topindex;
	int		botindex;
	int		count;

	count = ft_lstsize(stacka);
	while (count > (size - block))
	{
		ft_setindex(stacka);
		topindex = firstquarter(stacka, block);
		botindex = secondquarter(stacka, block);
		if (ft_compindex(topindex, botindex, count) == 1)
			loop_rotate_a(stacka, topindex);
		else
			loop_reverse_rotate_a(stacka, botindex);
		ft_push_b(stackb, stacka);
		count--;
	}
}
