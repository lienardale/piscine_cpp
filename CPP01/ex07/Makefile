NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = /

SRC = replace \

%.o: %.cpp
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

FIL = $(addsuffix .cpp, $(addprefix , $(SRC)))

OBJ = $(FIL:.cpp=.o)

BIN = $(addsuffix .o, $(SRC))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n\033[0;33mCompiling..."
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[0m"

clean:
	@echo "\033[0;31mCleaning..."
	rm -rf $(OBJ)
	@echo "\033[0m"

fclean: clean
	@echo "\033[0;31mRemoving executable..."
	rm -f $(NAME)
	@echo "\033[0m"

re: fclean all
