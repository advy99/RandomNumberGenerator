#include <ctime>
#include "random.hpp"

Random * Random::getInstance(){
	if (instancia == nullptr){
		instancia = new Random;
	}
	return instancia;
}

Random * Random::getInstance(const unsigned seed){
	if (instancia == nullptr){
		instancia = new Random(seed);
	}
	return instancia;
}

Random::Random():SEED(std::time(NULL)){
}

Random::Random(const unsigned long semilla):SEED(semilla){
}

Random::~Random(){
	if (instancia != nullptr){
		delete instancia;
	}
}

unsigned long Random::getSeed() const{
	return SEED;
}

float Random::getFloat(){
	return (( SEED = ( (SEED * PRIME) & MASK) ) * SCALE );
}

float Random::getFloat(const float LOW, const float HIGH){
	return (LOW + (HIGH-(LOW))*getFloat());
}

float Random::getFloat(const float HIGH){
	return getFloat(0, HIGH);
}




// Generar numero entre LOW y HIGH, ambos incluidos
int Random::getInt(const int LOW, const int HIGH){
	return (int) (LOW + (HIGH-(LOW)+1) * getFloat());
}

int Random::getInt(const int HIGH){
	return getInt(0, HIGH);
}

Random * Random::instancia = nullptr;
