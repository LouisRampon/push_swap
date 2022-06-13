# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 10:43:32 by ltrinchi          #+#    #+#              #
#    Updated: 2022/06/09 16:01:45 by lorampon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = \
				main.c \
				checkerror.c \
				createstack.c \
				sort_functions.c \
				main_sorter.c \
				small_sort.c \
				ft_double_push.c

OBJS_NAME = $(SRCS:.c=.o)

OBJS = $(addprefix $(OBJ_DIR),$(OBJS_NAME))
LIB_DIR = libft/
OBJ_DIR = objs/
SRC_DIR = srcs/

CC = gcc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -g

all: rcs $(OBJ_DIR) $(NAME)
	printf "Cest compile"

$(NAME) : $(OBJS) includes/push_swap.h Makefile libft/libft.a
	make -C $(LIB_DIR)
	$(CC) -o $(NAME) $(OBJS) -L $(LIB_DIR) -lft
	echo "##### push_swap compiling finished! #####"

rcs: 
	make -C $(LIB_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	echo "##### Creating" [ $@ ] " #####"
	gcc $(FLAGS) -o $@ -c $<

clean:
	make -C $(LIB_DIR) clean --silent
	$(RM) $(OBJS) $(OBJ_DIR)
	echo "##### Removed object files #####"

fclean: clean
	make -C $(LIB_DIR) fclean --silent
	$(RM) $(NAME)
	echo "##### Removed binary files #####"

re : fclean all

git: fclean
	git add *
	git add -u
	git commit
	
.PHONY: all clean fclean leaks re

.SILENT: