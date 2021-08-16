#include <ctime>
#include "Random.hpp"
#include <iostream>

void Random :: setSeed(const unsigned long semilla){
	generador_.seed(semilla);
}

Random :: ~Random(){
}

float Random :: getFloat(){
	std::uniform_real_distribution<> dis(0, 1.0);
	return dis(generador_);
}

float Random :: getFloat(const float LOW, const float HIGH){
	std::uniform_real_distribution<> dis(LOW, HIGH);
	return dis(generador_);
}

float Random :: getFloat(const float HIGH){
	return getFloat(0, HIGH);
}


int Random :: getInt(const int LOW, const int HIGH){
	std::uniform_int_distribution<> dis(LOW, HIGH - 1);
	return dis(generador_);
}

int Random :: getInt(const int HIGH){
	return getInt(0, HIGH);
}

std::mt19937 Random :: getGenerador() {
	return generador_;
}


std::mt19937 Random :: generador_;
