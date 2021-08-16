#include <ctime>
#include "Random.hpp"
#include <iostream>

void Random :: set_seed(const unsigned long semilla){
	generator_.seed(semilla);
}

Random :: ~Random(){
}

double Random :: next_float(){
	std::uniform_real_distribution<> dis(0, 1.0);
	return dis(generator_);
}

double Random :: next_float(const double LOW, const double HIGH){
	std::uniform_real_distribution<> dis(LOW, HIGH);
	return dis(generator_);
}

double Random :: next_float(const double HIGH){
	return next_float(0, HIGH);
}


int Random :: next_int(const int LOW, const int HIGH){
	std::uniform_int_distribution<> dis(LOW, HIGH - 1);
	return dis(generator_);
}

int Random :: next_int(const int HIGH){
	return next_int(0, HIGH);
}

std::mt19937 Random :: get_generator() {
	return generator_;
}


std::mt19937 Random :: generator_;
