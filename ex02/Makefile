CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -I../ex00 -I../ex01

NAME = animals

OBJ_DIR = bin

SRC = main.cpp WrongAnimal.cpp WrongCat.cpp
EX00_SRC = ../ex00/Animal.cpp
EX01_SRC = ../ex01/Brain.cpp ../ex01/Dog.cpp ../ex01/Cat.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
EX00_OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(EX00_SRC:.cpp=.o)))
EX01_OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(EX01_SRC:.cpp=.o)))

all: $(EX00_OBJ) $(EX01_OBJ) $(OBJ) $(NAME)

$(shell mkdir -p $(OBJ_DIR))

$(OBJ_DIR)/%.o: ../ex00/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: ../ex01/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(EX00_OBJ) $(EX01_OBJ) $(OBJ)
	$(CC) $(CFLAGS) $(EX00_OBJ) $(EX01_OBJ) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
