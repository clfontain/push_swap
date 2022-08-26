/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:38:23 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:08:39 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_setindex(t_list **stack)
{
	int		i;
	t_list	*temp;

	temp = (*stack);
	i = 0;
	while ((*stack))
	{
		(*stack)->index = i;
		(*stack) = (*stack)->next;
		i++;
	}	
	(*stack) = temp;
}
