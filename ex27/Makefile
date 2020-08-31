#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 10:00:09 by ciglesia          #+#    #+#              #
#    Updated: 2018/11/08 14:46:39 by ciglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	ft_display_file
INCLUDE		=	includes
SRC			=	srcs/display.c srcs/ft_display_file.c

CFLAGS		=	-Wall -Wextra -Werror

CC			=	/usr/bin/gcc
RM			=	/bin/rm -f

$(NAME)	:
				$(CC) $(SRC) -I $(INCLUDE) $(CFLAGS) -o $(NAME)

all		:		$(NAME)

fclean	:
				-@$(RM) $(NAME)

re		:		fclean all

clean	: