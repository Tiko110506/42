# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/03 12:16:14 by tibabaya          #+#    #+#              #
#    Updated: 2026/11/03 17:37:53 by tibabaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = do-op
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_atoi.c operators.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
