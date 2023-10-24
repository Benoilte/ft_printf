# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 14:22:06 by bebrandt          #+#    #+#              #
#    Updated: 2023/10/24 17:42:53 by bebrandt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c

SRCS_BONUS	=	

OBJS		:=	$(SRCS:.c=.o)

OBJS_BONUS	:=	$(SRCS_BONUS:.c=.o)

OBJS_ALL	=	$(OBJS) $(OBJS_BONUS)

LIBFT_DIR		=	libft

LIBFT_NAME		=	libft.a

HDRS		=	-I .

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar rcs

LIB			=	ranlib

RM			=	rm -f

all: $(NAME)

%.o:	%.c
	$(CC) $(HDRS) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) 
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
	$(AR) $(NAME) $^
	$(LIB) $(NAME)

bonus:	$(OBJS_ALL)
	$(AR) $(NAME) $^
	$(LIB) $(NAME)

compile:	$(NAME)
	$(CC) $(HDRS) $(CFLAGS) main.c -L . $(NAME) -o test_ft_printf

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS_ALL)

fclean:	clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)
	$(RM) test_ft_printf

re:	fclean all

.PHONY: all bonus compile clean fclean re
