/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quarter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:43:18 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:34:22 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	firstquarter(t_list **stacka, int median)
{
	int		i;
	int		topindex;
	t_list	*temp;
	int		size;

	topindex = -1;
	i = 0;
	temp = (*stacka);
	size = ft_lstsize(stacka);
	while (i < (size / 2) && (*stacka))
	{
		if ((*stacka)->place < median)
		{
			topindex = (*stacka)->index;
			break ;
		}	
		(*stacka) = (*stacka)->next;
		i++;
	}
	*stacka = temp;
	return (topindex);
}

int	secondquarter(t_list **stacka, int median)
{
	int		i;
	int		botindex;
	int		size;
	t_list	*temp;

	size = ft_lstsize(stacka);
	botindex = -1;
	i = 0;
	temp = (*stacka);
	while (i < (size / 2))
	{
		*stacka = (*stacka)->next;
		i++;
	}
	while ((*stacka))
	{
		if ((*stacka)->place < median)
		botindex = (*stacka)->index;
		(*stacka) = (*stacka)->next;
	}
	*stacka = temp;
	return (botindex);
}
