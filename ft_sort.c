/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:56:28 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/08 10:26:01 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_sort(t_list **stacka, t_list **stackb)
{
	int		size;
	int		lowest;

	size = 0;
	lowest = 0;
	find_the_lowest(stacka, &lowest);
	size = ft_lstsize(stacka);
	if (size == 2)
		ft_sort_2_numb(stacka);
	if (size == 3)
		ft_sort_3_numb(stacka);
	if (size == 4)
		ft_sort_4_numb(stacka, stackb, &lowest);
	if (size == 5)
		ft_sort_5_numb(stacka, stackb, &lowest);
	if (size > 5)
		ft_sort_big(stacka, stackb, size);
}

void	ft_init_sort(t_list **stacka, t_list **stackb, char **str)
{
	int		*tab;

	tab = 0;
	*stacka = ft_sort_tab(*stacka, tab, str);
	if (*stacka == NULL)
	{
		ft_freetab(str);
		return ;
	}
	ft_freetab(str);
	ft_setindex(stacka);
	ft_sort(stacka, stackb);
}
