HOME     = .
BIN      = $(HOME)/bin
INC	   = $(HOME)/include
SRC      = $(HOME)/src

FLAGS = --std=c++17 -O2 -Wall

all: crear-carpetas $(BIN)/prueba

$(BIN)/prueba:  $(SRC)/main.cpp
	g++ $(FLAGS) -I $(INC) $^ -o $@


clean:
	-rm $(BIN)/*

crear-carpetas:
	@printf "\e[36mCreando carpetas necesarias\e[0m\n"
	-@mkdir $(BIN) 2> /dev/null || printf "\t\e[33mYa existe la carpeta $(BIN)\n\e[0m"

