HOME     = .
BIN      = $(HOME)/bin
INC	   = $(HOME)/include
SRC      = $(HOME)/src
OBJ      = $(HOME)/obj

FLAGS = --std=c++17 -O3 -Wall

all: $(BIN)/prueba

$(BIN)/prueba: $(OBJ)/random.o $(OBJ)/main.o
	g++ $^ -o $@

$(OBJ)/random.o: $(SRC)/random.cpp
	g++ -c $(FLAGS) $^ -I$(INC) -o $@

$(OBJ)/main.o: $(SRC)/main.cpp
	g++ -c $(FLAGS) $^ -I$(INC) -o $@


clean:
	-rm $(OBJ)/*.o
	-rm $(BIN)/*


