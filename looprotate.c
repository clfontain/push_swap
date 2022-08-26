/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looprotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:33:50 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:00:15 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	loop_rotate_a(t_list **stacka, int j)
{
	int		i;

	i = 0;
	while ((*stacka)->index != j)
	{
		ft_rotate_a(stacka);
		i++;
	}		
}

void	loop_reverse_rotate_a(t_list **stacka, int j)
{
	int		i;

	i = 0;
	while ((*stacka)->index != j)
	{
		ft_reverse_rotate_a(stacka);
		i++;
	}	
}
