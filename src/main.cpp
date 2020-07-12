#include <iostream>
#include "random.hpp"

int main(int argc, char ** argv){

	Random aleatorios(1234234323);
	Random copia(aleatorios);

	std::cout << aleatorios.getSeed() << std::endl;

	int aleatorio = aleatorios.getInt(20);
	int aleatorio2 = copia.getInt(20);

	std::cout << aleatorio << " " << aleatorio2 << std::endl;

	for (int i = 0; i < aleatorio; i++){
		std::cout << aleatorios.getFloat(aleatorio) << " " << copia.getFloat(aleatorio) << std::endl;
	}

	return 0;

}
