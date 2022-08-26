/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_short.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:48:29 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:20:59 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_sort_2_numb(t_list **stacka)
{
	if ((*stacka)->content > (*stacka)->next->content)
		ft_rotate_a(stacka);
}

void	ft_sort_3_numb(t_list **stacka)
{
	int		nb1;
	int		nb2;
	int		nb3;

	nb1 = (*stacka)->content;
	nb2 = (*stacka)->next->content;
	nb3 = (*stacka)->next->next->content;
	if (nb1 > nb2 && nb2 < nb3 && nb1 < nb3)
		ft_swap_a(stacka);
	else if (nb1 > nb2 && nb1 > nb3 && nb2 > nb3)
	{
		ft_swap_a(stacka);
		ft_reverse_rotate_a(stacka);
	}
	else if (nb1 > nb2 && nb1 > nb3 && nb2 < nb3)
		ft_rotate_a(stacka);
	else if (nb1 < nb2 && nb1 < nb3 && nb2 > nb3)
	{
		ft_swap_a(stacka);
		ft_rotate_a(stacka);
	}
	else if (nb1 < nb2 && nb1 > nb3 && nb2 > nb3)
		ft_reverse_rotate_a(stacka);
}

void	ft_sort_4_numb(t_list **stacka, t_list **stackb, int	*lowest)
{
	int	trig;

	trig = 0;
	ft_push_4_low(stacka, stackb, lowest, trig);
	ft_sort_3_numb(stacka);
	ft_push_a(stacka, stackb);
}

void	ft_sort_5_numb(t_list **stacka, t_list **stackb, int *lowest)
{
	int		highest;
	int		trig;

	trig = -1;
	highest = find_the_highest(stacka);
	ft_push_5_high(stacka, stackb, lowest, trig);
	ft_push_highest(stacka, stackb, highest);
	ft_sort_3_numb(stacka);
	ft_push_a(stacka, stackb);
	ft_rotate_a(stacka);
	ft_push_a(stacka, stackb);
}
