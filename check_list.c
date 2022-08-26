/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:35:05 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:08:01 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_checkletter(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	if (str[0] == '-' && i == 1)
		return (1);
	if (i > 12)
		return (1);
	return (0);
}

int	ft_checklist(t_list *stacka, char *str)
{
	long		i;

	i = ft_atoi(str);
	if (i < -2147483648 || i > 2147483647)
		return (1);
	if (ft_checkletter(str) == 1)
		return (1);
	while (stacka)
	{
		if (i == stacka->content)
			return (1);
		stacka = stacka->next;
	}
	return (0);
}
