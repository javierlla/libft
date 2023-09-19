# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jllarena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 11:55:39 by jllarena          #+#    #+#              #
#    Updated: 2023/09/19 12:23:13 by jllarena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
	
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	   ft_memcpy.c ft_memmove.c ft_strlcpy.c 
OBJECTS = $(SRCS:.c=.o)


CC = gcc


CFLAGS = -Wall -Wextra -Werror


all: $(NAME)


$(OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJECTS)
	ar rcs $@ $^


clean:
	@rm -f $(OBJECTS)


fclean: clean
	@rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
