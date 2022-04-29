# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 10:43:32 by ltrinchi          #+#    #+#              #
#    Updated: 2022/04/29 18:10:00 by lorampon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INPUT_PARSING = 

ERROR_HANDLING = 

STACK_HANDLING =

SORTING = 

FILES = \
				main.c \
				checkerror.c \
				$(addprefix debug/,$(DEBUG))\
				$(addprefix input_parsing/,$(INPUT_PARSING))\
				$(addprefix error_handling/,$(ERROR_HANDLING))\
				$(addprefix stack_handling/,$(STACK_HANDLING))\
				$(addprefix sorting/,$(SORTING))

LIBFT_FILES = \
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_atoll.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putunbr_fd.c\
				ft_printf.c\
				ft_print_nbr.c\
				ft_print_char.c\
				ft_printf.c \
				ft_print_nbr.c \
				ft_print_char.c

SRCS = $(addprefix ./srcs/,$(FILES))
SRCS_LIBFT = $(addprefix ./libft/,$(LIBFT_FILES))
OBJ = $(SRCS:.c=.o)
ARGS = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c $(SRCS_LIBFT) ./includes/push_swap.h ./libft/libft.h
	gcc $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	make bonus -C ./libft
	cp ./libft/libft.a ./
	gcc $(OBJ) libft.a -o $(NAME)

clean:
	make -C ./libft clean
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf libftprintf.a
	/bin/rm -rf libft/libft.a
	/bin/rm -rf ./libft.a
	/bin/rm -rf $(NAME)

re : fclean all

%:
    @:

leaks: $(NAME)
	leaks -atExit -- ./$(NAME) $(call ARGS,defaultstring)

.PHONY: all clean fclean leaks re
