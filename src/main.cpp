#include <iostream>
#include "random.hpp"

int main(int argc, char ** argv){

	Random::setSeed(123456789);

	Random::setSeed(12312);

	std::cout << Random::getSeed() << std::endl;


	std::cout << Random::getSeed() << std::endl;

	int aleatorio = Random::getInt(1,10);

	std::cout << aleatorio << std::endl;

	for (int i = 0; i < aleatorio; i++){
		std::cout << Random::getFloat(aleatorio) << std::endl;
	}

	return 0;

}
