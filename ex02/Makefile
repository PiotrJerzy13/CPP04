CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++17 -I. -I../ex01 -I../ex00

NAME = animals

OBJ_DIR = bin
EX00_OBJ_DIR = ../ex00/bin

SRC = main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
EX00_SRC = ../ex00/Cat.cpp ../ex00/Dog.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
EX00_OBJ = $(addprefix $(EX00_OBJ_DIR)/, $(notdir $(EX00_SRC:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJ) $(EX00_OBJ)
	$(CC) $(CFLAGS) $(OBJ)  $(EX00_OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(EX00_OBJ_DIR)/%.o: ../ex00/%.cpp
	@mkdir -p $(EX00_OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	# @$(MAKE) -C ../ex01 fclean
	@$(MAKE) -C ../ex00 fclean

re: fclean all
