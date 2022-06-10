/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:03:29 by cfontain          #+#    #+#             */
/*   Updated: 2022/06/09 11:26:34 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>



void	ft_printlist(t_list *stacka)
{
	while (stacka)
	{
		printf("%s\n", (char*)stacka->content);
		stacka = stacka->next;
	}
}

int main(int argc, char **argv)
{
	int		i;
	t_list *stacka;
	
	i = 1;
	stacka = NULL;
	if (argc == 1)
		return (printf("ERROR\n"));
	
	while (i < argc)
	{
		ft_checklist(stacka, argv[i]);
		ft_lstadd_front(&stacka, ft_lstnew(argv[i]));
		
		i++;
	}
	ft_printlist(stacka);
	
}