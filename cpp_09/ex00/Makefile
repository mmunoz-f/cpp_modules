NAME		:= btc

CXX			:= clang++
CXXFLAGS	:= -Wall -Werror -Werror -g -fsanitize=address

SRCS		:= main.cpp DataReader.cpp
OBJS		:= $(SRCS:.cpp=.o)

.Phopy: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
.Phopy: clean
clean:
	rm -f $(OBJS)

.Phopy: fclean
fclean: clean
	rm -f $(NAME)

.Phopy: re
re: fclean all