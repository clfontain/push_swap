/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:07:04 by cfontain          #+#    #+#             */
/*   Updated: 2022/07/08 10:47:59 by cfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>

int		checkarg(char **argv);
char	*ft_strjoinpull(int size, char **strs, char *sep);
char	*ft_join_tab(int size, char **strs, char *sep, char *tab);
t_list	*ft_initlist(t_list *stacka, char **str);
int		ft_checklist(t_list *stacka, char *str);
int		ft_checkletter(char *str);
void	ft_lstdellist(t_list *lst);
void	ft_freetab(char **str);
void	ft_lstadd_backcust(t_list **lst, t_list *new);
t_list	*ft_sort_tab(t_list *stacka, int *tab, char **str);
int		sort_or_not(int	*tab, int n);
int		*ft_bubblesort(int	*tab, int n);
t_list	*ft_assignorder(int	*tab, t_list *stacka, int n);
void	endfonction(t_list *stacka, t_list *stackb);
void	ft_sort(t_list **stacka, t_list **stackb);
void	find_the_lowest(t_list **stacka, int *lowest);

void	ft_sort_2_numb(t_list **stacka);
void	ft_sort_3_numb(t_list **stacka);
void	ft_sort_4_numb(t_list **stacka, t_list **stackb, int	*lowest);
void	ft_sort_5_numb(t_list **stacka, t_list **stackb, int	*lowest);

void	ft_rotate_a(t_list **stack);
void	ft_rotate_b(t_list **stack);
void	ft_r_rotate_a(t_list **stack);
void	ft_r_rotate_b(t_list **stack);
void	ft_rr(t_list **stacka, t_list **stackb);

void	ft_reverse_rotate_a(t_list **stack);
void	ft_reverse_rotate_b(t_list **stack);
void	ft_r_reverse_rotate_a(t_list **stack);
void	ft_r_reverse_rotate_b(t_list **stack);
void	ft_rrr(t_list **stacka, t_list **stackb);

void	ft_swap_a(t_list **stack);
void	ft_swap_b(t_list **stack);
void	ft_swap_pointer(t_list **p1, t_list *p2);
void	ft_ss(t_list **stacka, t_list **stackb);

void	ft_push_a(t_list **stacka, t_list **stackb);
void	ft_push_b(t_list **stackb, t_list **stacka);

void	ft_push_4_low(t_list **stacka, t_list **stackb, int *lowest, int trig);
void	ft_push_5_high(t_list **stacka, t_list **stackb, int *lowest, int trig);
void	ft_push_highest(t_list **stacka, t_list **stackb, int highest);

void	find_the_lowest(t_list **stacka, int *lowest);
int		find_the_highest(t_list **stacka);

void	ft_setindex(t_list **stack);

void	ft_sort_big(t_list **stacka, t_list **stackb, int size);
void	ft_sortmax(t_list **stacka, t_list **stackb, int block, int size);

int		firstquarter(t_list **stacka, int median);
int		secondquarter(t_list **stacka, int median);
int		ft_compindex(int index1, int index2, int size);
void	final_short(t_list **stacka, t_list **stackb, int block, int size);

void	loop_rotate_a(t_list **stacka, int j);
void	loop_reverse_rotate_a(t_list **stacka, int j);

int		find_the_next(t_list **stackb, int next);
void	push_the_next(t_list **stacka, t_list **stackb, int next);

void	ft_init_sort(t_list **stacka, t_list **stackb, char **str);

#endif 