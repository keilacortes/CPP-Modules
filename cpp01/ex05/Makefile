NAME = harl

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS = main.cpp \
	   Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

VALGRIND_FLAGS = --leak-check=full \
				 --show-leak-kinds=all \
				 --track-origins=yes

valgrind: $(NAME)
	@echo "$(BLUE)Running with Valgrind...$(RESET)"
	@valgrind $(VALGRIND_FLAGS) ./$(NAME) $(ARGS)

.PHONY: all clean fclean re
