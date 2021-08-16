#include <iostream>
#include "Random.hpp"

int main(int argc, char ** argv){


	unsigned long long seed = 0;
	
	std::cout << "Enter a seed: ";
	std::cin >> seed;

	Random::set_seed(seed);


	int aleatorio = Random::next_int(3,7);

	std::cout << aleatorio << std::endl;

	for (int i = 0; i < aleatorio; i++){
		std::cout << Random::next_float(aleatorio) << std::endl;
	}

	return 0;

}
