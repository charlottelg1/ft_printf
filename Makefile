# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 21:13:09 by cle-gran          #+#    #+#              #
#    Updated: 2021/09/19 17:38:10 by cle-gran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   printf_spec1.c \
	   printf_spec2.c \
	   printf_utils.c \

OBJS = ${SRCS:.c=.o}

HEADER = includes

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: $(NAME)

%.o: %.c
	${CC} -c ${FLAGS} -o $@ $< -I ${HEADER}

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
	${RM} $(NAME)

re: fclean all
