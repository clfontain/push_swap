/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:41:01 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:41:31 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_countsort(int size, int index)
{
	int		count;

	count = 0;
	if (index <= (size / 2))
		count = index + 1;
	if (index > (size / 2))
		count = size - index +1;
	return (count);
}

int	ft_compindex(int index1, int index2, int size)
{
	int		topindex;
	int		botindex;

	if (index1 == -1)
		return (0);
	if (index2 == -1)
		return (1);
	topindex = ft_countsort(size, index1);
	botindex = ft_countsort(size, index2);
	if (topindex <= botindex)
		return (1);
	else
		return (0);
}
