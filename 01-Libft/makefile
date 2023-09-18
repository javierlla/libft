# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jllarena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 11:55:39 by jllarena          #+#    #+#              #
#    Updated: 2023/09/18 12:07:09 by jllarena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
	
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_toupper.c ft_tolower ft_strrchr.c ft_strncmp.c \
	   ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
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
