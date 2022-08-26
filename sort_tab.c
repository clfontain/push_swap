/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:36:53 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/08 10:43:53 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_freetab(char **str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free (str[i]);
			i++;
		}
	}	
	free (str);
}

int	sort_or_not(int	*tab, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (tab[i] > tab[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_bubblesort(int	*tab, int n)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

t_list	*ft_assignorder(int	*tab, t_list *stacka, int n)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = stacka;
	while (i < n)
	{
		stacka = temp;
		while (stacka != NULL)
		{
			if (stacka->content == tab[i])
			{
				stacka->place = i;
			}
			stacka = stacka->next;
		}
		i++;
	}
	stacka = temp;
	free (tab);
	return (stacka);
}

t_list	*ft_sort_tab(t_list *stacka, int *tab, char **str)
{
	int		i;
	int		j;

	j = -1;
	i = 0;
	while (str[i])
		i++;
	tab = malloc(sizeof(int) * i);
	if (tab == NULL)
	{
		ft_lstdellist(stacka);
		return (NULL);
	}	
	while (++j < i)
		tab[j] = ft_atoi(str[j]);
	if (sort_or_not(tab, i) == 0)
	{
		ft_lstdellist(stacka);
		return (free (tab), NULL);
	}	
	tab = ft_bubblesort(tab, i);
	stacka = ft_assignorder(tab, stacka, i);
	return (stacka);
}
