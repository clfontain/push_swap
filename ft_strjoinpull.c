/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinpull.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:43:15 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/07 15:35:40 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

char	*ft_join_tab(int size, char **strs, char *sep, char *tab)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			tab[k] = strs[i][j];
			j++;
			k++;
		}
		l = -1;
		while (sep[++l] != 0 && i < size - 1)
		{
			tab[k] = sep[l];
			k++;
		}
	}
	tab[k] = 0;
	return (tab);
}

char	*ft_strjoinpull(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		n;

	if (size == 0)
	{	
		tab = (char *)malloc(sizeof(char) * 1);
		tab[0] = 0;
		return (tab);
	}	
	n = 0;
	i = 1;
	while (i < size)
	{
		n = n + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	i = 0;
	tab = (char *)malloc(sizeof(char) *(n + 1));
	if (tab == NULL)
		return (NULL);
	tab[0] = 0;
	ft_join_tab(size, strs, sep, tab);
	return (tab);
}
