# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjoao-de <cjoao-de@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 12:12:04 by cjoao-de          #+#    #+#              #
#    Updated: 2023/10/31 15:55:41 by cjoao-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTS =	ft_isalpha.c	ft_isdigit.c	ft_tolower.c	ft_isalnum.c \
		ft_isascii.c	ft_isprint.c	ft_toupper.c	ft_strchr.c \
		ft_strrchr.c	ft_strlen.c		ft_strncmp.c	ft_memset.c \
		ft_bzero.c		ft_memchr.c		ft_memcpy.c		ft_memcmp.c \
		ft_strnstr.c	ft_strlcpy.c	ft_strlcat.c 	ft_atoi.c \
		ft_calloc.c		ft_strdup.c 	ft_putchar_fd.c	ft_itoa.c\
		ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_strmapi.c\
		ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_striteri.c \
		ft_memmove.c	ft_split.c

BONUS_FTS =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c \
		ft_lstadd_back.c	ft_lstdelone.c		ft_lstclear.c	ft_lstiter.c \
		ft_lstmap.c

NAME = libft.a
OBJECTS = $(FTS:.c=.o)
BONUS_OBJECTS = $(BONUS_FTS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $?

#$(OBJECTS): $(FTS)
#	$(CC) $(CFLAGS) -c $(FTS)

bonus: $(NAME) $(BONUS_OBJECTS)
	$(AR) $(NAME) $?

#$(BONUS_OBJECTS): $(BONUS_FTS)
#	$(CC) $(CFLAGS) -c $(BONUS_FTS)

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
