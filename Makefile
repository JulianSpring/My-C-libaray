# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jspring <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/10 09:32:56 by jspring           #+#    #+#              #
#    Updated: 2016/05/11 17:01:52 by jspring          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isdigit.c ft_strcpy.c ft_strncmp.c ft_tolower.c ft_atoi.c \
	 ft_isprint.c ft_strdup.c ft_strncpy.c ft_toupper.c ft_isalnum.c \
	ft_strcat.c ft_strlcat.c ft_strnstr.c ft_isalpha.c ft_strchr.c \
   ft_strlen.c ft_strrchr.c ft_isascii.c ft_strcmp.c ft_strncat.c ft_strstr.c \
   ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_bzero.c ft_memalloc.c \
   ft_strnew.c ft_memdel.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
   ft_memset.c ft_memmove.c ft_memcpy.c ft_memchr.c ft_memccpy.c ft_memcmp.c \
   ft_strmap.c ft_strequ.c ft_strsub.c ft_strmapi.c ft_strnequ.c ft_strjoin.c \
   ft_strtrim.c ft_strsplit.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
   ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_itoa.c

BIN = $(SRC:.c=.o)

HEAD = libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(BIN)
	@ranlib $(NAME)

clean:
	@rm -f $(BIN)

fclean: clean
	@rm -f $(NAME)

re: fclean all