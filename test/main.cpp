#include <iostream>
#include "random.hpp"

int main(int argc, char ** argv){
	if (argc > 1) {
		unsigned long long seed = atoll(argv[1]);

		Random::set_seed(seed);
	}
	
	int random_number = Random::next_int(3,7);

	std::cout << random_number << std::endl;

	for (int i = 0; i < random_number; i++)
		std::cout << Random::next_double(random_number) << std::endl;

	return 0;
}
