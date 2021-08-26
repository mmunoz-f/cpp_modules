# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel <miguel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 20:55:45 by mmunoz-f          #+#    #+#              #
#    Updated: 2021/08/26 11:32:25 by miguel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Werror -Wextra

TIME = $(shell date +'%d/%m/%Y %H:%M:%S')
M =

NAME =

SRCS =
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

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
