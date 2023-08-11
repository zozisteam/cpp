# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 02:21:07 by mraspors          #+#    #+#              #
#    Updated: 2023/08/11 15:53:08 by alalmazr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = btc

FILES = BitcoinExchange.cpp

OBJ = $(FILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re