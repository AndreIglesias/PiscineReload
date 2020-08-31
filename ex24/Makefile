#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:14:00 by ciglesia          #+#    #+#              #
#    Updated: 2018/11/08 14:08:16 by ciglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libft.a
INCLUDE		=	includes
SRC			=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS		=	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

CFLAGS		=	-Wall -Wextra -Werror

CC			=	/usr/bin/gcc
RM			=	/bin/rm -f


$(NAME)	:
				$(CC) $(CFLAGS) -c $(SRC) -I $(INCLUDE)
				ar rc $(NAME) $(OBJS)
				ranlib $(NAME)

clean	:
				-@$(RM) $(OBJS)

all		:		$(NAME)

fclean	:		clean
				-@$(RM) $(NAME)

re		:		fclean all
