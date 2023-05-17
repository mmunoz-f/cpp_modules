NAME		:= btc

CXX			:= clang++
CXXFLAGS	:= -Wall -Werror -Werror -g -fsanitize=address

OBJ_DIR		:= obj/

SRCS		:= main.cpp BitcoinDataValue.cpp BitcoinExchange.cpp BitcoinDataset.cpp FormattedDate.cpp
OBJS		:= $(SRCS:.cpp=.o)

# OBJS		:= $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# $(OBJ_DIR)%.o: $(SRC_DIR)%.c
# 	mkdir -p $(@D)
# 	$(CC) $(CFLAGS) -c $< -o $@

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