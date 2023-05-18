NAME		:= RPN

CXX			:= clang++
CXXFLAGS	:= -Wall -Werror -Werror -g

OBJ_DIR		:= obj/

SRCS		:= main.cpp RPN.cpp
OBJS		:= $(SRCS:%.cpp=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.Phopy: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
.Phopy: clean
clean:
	rm -rf $(OBJ_DIR)

.Phopy: fclean
fclean: clean
	rm -f $(NAME)

.Phopy: re
re: fclean all