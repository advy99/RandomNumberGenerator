HOME = .
BIN  = $(HOME)/bin
INC  = $(HOME)/include
SRC  = $(HOME)/src

FLAGS = --std=c++17 -O2 -Wall

all: create-dirs $(BIN)/test

$(BIN)/test: $(SRC)/main.cpp
	g++ $(FLAGS) -I $(INC) $^ -o $@

clean:
	-rm $(BIN)/*

create-dirs:
	@printf "\e[36mCreating required directories...\e[0m\n"
	-@mkdir -p $(BIN) 2> /dev/null || printf "\t\e[33mDirectory %s already exists!\n\e[0m" "$(BIN)"
