CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -I../ex00

NAME = animals
OBJ_DIR = bin

SRC = main.cpp Brain.cpp Dog.cpp Cat.cpp
EX00_SRC = ../ex00/Animal.cpp ../ex00/Dog.cpp ../ex00/Cat.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
EX00_OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(EX00_SRC:.cpp=.o)))

all: $(EX00_OBJ) $(NAME)

$(OBJ_DIR)/%.o: ../ex00/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(EX00_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(EX00_OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C ../ex00 fclean
	rm -f $(NAME)

re: fclean all
