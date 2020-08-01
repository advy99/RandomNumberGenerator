#include <ctime>
#include "random.hpp"
#include <iostream>

void Random::setSeed(const unsigned long semilla){
	if ( !inicializado ){
		SEED = semilla;
		inicializado = true;
	} else {
		std::cerr << "WARNING: Intentando inicializar dos veces el generador de aleatorios, no hacemos nada" << std::endl;
	}
}


Random::Random(){

}


Random::~Random(){
}

unsigned long Random::getSeed(){
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
	return (int) (LOW + (HIGH-(LOW)) * getFloat());
}

int Random::getInt(const int HIGH){
	return getInt(0, HIGH);
}

const double Random::SCALE = 0.4656612875e-9;
const unsigned long int Random::PRIME = 65539L;
const unsigned long int Random::MASK = 2147483647L;
unsigned long Random::SEED = std::time(NULL);
bool Random::inicializado = false;
