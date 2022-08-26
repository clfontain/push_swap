/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:03:29 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/08 10:57:22 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

t_list	*ft_initlist(t_list *stacka, char **str)
{
	int		j;
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	j = 0;
	while (str[j])
		j++;
	while (i < j)
	{
		if (ft_checklist(stacka, str[i]) == 1)
		{
			ft_lstdellist(stacka);
			return (NULL);
		}	
		nb = ft_atoi(str[i]);
		ft_lstadd_back(&stacka, ft_lstnew(nb));
		if (stacka == NULL)
			return (NULL);
		i++;
	}
	return (stacka);
}

int	checkarg(char **argv)
{
	int		i;
	int		j;

	j = 1;
	i = 1;
	while (argv[i] != 0)
	{
		if (argv[i][0] == 0)
			j++;
		i++;
	}		
	if (j == i)
		return (1);
	return (0);
}

void	endfonction(t_list *stacka, t_list *stackb)
{
	ft_lstdellist(stacka);
	ft_lstdellist(stackb);
}

char	**init_str(int argc, char **argv)
{
	char	**str;			
	char	*str1;

	str = NULL;
	str1 = ft_strjoinpull((argc), argv, " ");
	str = ft_split(str1, ' ');
	if (str == NULL)
		return (free (str1), NULL);
	free (str1);
	return (str);
}

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;
	char	**str;			

	str = NULL;
	if (argc == 1 || checkarg(argv) == 1)
		return (0);
	str = init_str(argc, argv);
	if (str == NULL)
		return (0);
	stacka = NULL;
	stackb = NULL;
	stacka = ft_initlist(stacka, str);
	if (stacka == NULL)
	{
		ft_freetab(str);
		return (write(2, "Error\n", 6));
	}	
	ft_init_sort(&stacka, &stackb, str);
	if (stacka == NULL)
		return (0);
	endfonction(stacka, stackb);
	return (0);
}
