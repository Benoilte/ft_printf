# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 17:15:49 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/21 14:19:16 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c \
			ft_memset.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c \
			ft_bzero.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS		:=	$(SRCS:.c=.o)

OBJS_BONUS	:=	$(SRCS_BONUS:.c=.o)

OBJS_ALL	=	$(OBJS) $(OBJS_BONUS)

HDRS		=	-I .

CC			=	gcc $(HDRS)

CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar rcs

LIB			=	ranlib

RM			=	rm -f

all:	$(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(AR) $(NAME) $^
	$(LIB) $(NAME)

bonus:	$(OBJS_ALL)
	$(AR) $(NAME) $^
	$(LIB) $(NAME)

clean:
	$(RM) $(OBJS_ALL)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re
