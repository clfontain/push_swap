/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:41:04 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 16:25:21 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list **lst)
{
	int		i;
	t_list	*temp;

	temp = *lst;
	if (!(*lst))
		return (0);
	i = 1;
	while ((*lst)->next)
	{
		(*lst) = (*lst)->next;
		i++;
	}
	*lst = temp;
	return (i);
}
