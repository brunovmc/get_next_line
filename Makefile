# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 00:04:10 by bvidigal          #+#    #+#              #
#    Updated: 2020/02/19 21:27:42 by bvidigal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror -D BUFFER_SIZE=32
HEADER = get_next_line.h
NAME = a.out
SRC = get_next_line.c\
			get_next_line_utils.c
OBJ = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"
%.o: %.c
	@gcc $(FLAG) -I includes -c $< -o $@
clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
re: fclean all
.PHONY: all, clean, fclean, re
