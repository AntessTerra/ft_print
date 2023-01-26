# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 12:24:34 by jbartosi          #+#    #+#              #
#    Updated: 2023/01/17 12:24:36 by jbartosi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) clean

$(NAME): $(OBJS)
	ar -cr $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $(SRCS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
