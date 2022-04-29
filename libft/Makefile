# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 10:43:32 by ltrinchi          #+#    #+#              #
#    Updated: 2022/04/29 18:09:34 by lorampon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isdigit.o \
		ft_isprint.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strdup.c \
		ft_split.c \
		ft_memmove.c \
		ft_strtrim.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_strjoin.c \
		ft_memcmp.c \
		ft_substr.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c \
		ft_strmapi.c \
		ft_memchr.c \
		ft_striteri.c \
		ft_printf.c \
		ft_print_nbr.c \
		ft_print_char.c

SRCSBNS = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJSBS = $(SRCSBNS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(OBJSBS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJSBS)
	ar rc $(NAME) $(OBJS) $(OBJSBS)

clean:
	$(RM) $(OBJS) $(OBJSBS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

