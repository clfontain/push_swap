# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 12:36:32 by cfontain          #+#    #+#              #
#    Updated: 2022/07/08 11:21:57 by cfontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	push_swap.c \
			ft_push.c \
			ft_reverse_rotate.c \
			ft_rotate.c \
			ft_sort.c \
			ft_sort_short.c \
			ft_strjoinpull.c \
			ft_lstdellist.c \
			ft_swap.c \
			sortbig.c \
			looprotate.c \
			check_list.c \
			sort_tab.c \
			set_index.c \
			ft_compindex.c \
			quarter.c \
			push_small_numb.c \
			final_short.c \
					

LIBFT= ./libft/libft.a

NAME		= push_swap

HEADER		= push_swap.h

OBJS		= ${SRCS:.c=.o}


CC		= gcc 

CFLAGS		= -Wall -Wextra -Werror -g3

RM		= rm -f

all:		${NAME}

${NAME}: ${HEADER}  ${OBJS} 
	@make -C ./libft/
	@make -C ./libft bonus
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(LIBFT)
	
			
			
clean:
	${RM} ${OBJS} ${BONUSOBJS}
	@make clean -C ./libft/
	
fclean:		clean
			${RM} ${NAME}
			@make fclean -C ./libft/
			 

re:		fclean all

.PHONY:		all clean fclean re
