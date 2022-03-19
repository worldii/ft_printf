# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonghapark <jonghapark@student.42seoul.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 19:18:22 by jonghapark        #+#    #+#              #
#    Updated: 2022/03/20 01:26:15 by jonghapark       ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

NAME =libftprintf.a
LIBFT_DIR= Libft/
SRC = ft_printf.c ft_printfmix.c utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c ft_printf Libft/libft.h
	$(CC) $(CFLAGS) $< -o $@ 

$(NAME) : $(OBJ) 
	make all -C $(LIBFT_DIR)
	cp Libft/libft.a $(NAME)
	ar crs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) 
	make fclean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
re :fclean all
.PHONY: clean fclean re all