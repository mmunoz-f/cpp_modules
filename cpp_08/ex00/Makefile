# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 20:55:45 by mmunoz-f          #+#    #+#              #
#    Updated: 2021/09/24 08:31:30 by mmunoz-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra #-g -fsanitize=address

TIME = $(shell date +'%d/%m/%Y %H:%M:%S')
M =

NAME = templates

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

push: fclean
	git add ../..
	git commit -m "$(TIME) - $M"
	git push origin master

.PHONY: all clean fclean re push
