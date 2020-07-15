#include <iostream>
#include "random.hpp"

int main(int argc, char ** argv){

	Random * aleatorios = Random::getInstance(1234234323);

	std::cout << aleatorios->getSeed() << std::endl;

	int aleatorio = aleatorios->getInt(20);

	std::cout << aleatorio  << std::endl;

	for (int i = 0; i < aleatorio; i++){
		std::cout << aleatorios->getFloat(aleatorio) << std::endl;
	}

	return 0;

}
