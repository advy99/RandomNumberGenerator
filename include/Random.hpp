/**
  * \@file random.hpp
  * @brief Fichero cabecera de la clase Random
  *
  */

#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

/**
  *  @brief Clase Random
  *
  * Una instancia del tipo Random será un generador modular de números aleatorios.
  *
  *
  * @author Antonio David Villegas Yeguas
  * @date Julio 2020
  */

#include <random>


class Random{
	private:

		/**
		  * @page repRandom Representación de la clase Random
		  *
		  * @section invRandom Invariante de la representación
		  *
		  * El invariante es; SEED ha de estar inicializado
		  *
		  *
		  */

		inline static std::mt19937 generator_;


		Random() = delete;



	public:

		/**
		 * @brief Inicializar la semilla
		 *
		 * @param seed Nueva semilla para el generador
		 */

		static void set_seed(const unsigned long seed);



		/**
		  * @brief Destructor de la clase Random
		  *
		  */

		~Random() = default;

		/**
		  * @brief Constructor de copia. ELIMINADO AL SER UNA CLASE SINGLETON
		  *
		  */


		Random(const Random & otro) = delete;

		/**
		  * @brief Operador =. ELIMINADO AL SER UNA CLASE SINGLETON
		  *
		  */
		Random & operator = (const Random & otro) = delete;


		/**
		  * @brief Generar un valor real aleatorio entre [0, 1[
		  *
		  * @return Número aleatorio entre [0, 1[
		  */

		static double next_float();


		/**
		  * @brief Generar un valor real aleatorio entre dos valores dados
		  *
		  * @param LOW Límite inferior para el valor a generar
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número real aleatorio entre [LOW, HIGH[
		  */

		static double next_float(const double LOW, const double HIGH);

		/**
		  * @brief Generar un valor real aleatorio entre 0 y un valor dado
		  *
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número real aleatorio entre [0, HIGH[
		  */

		static double next_float(const double HIGH);


		/**
		  * @brief Generar un valor entero aleatorio entre dos valores dados
		  *
		  * @param LOW Límite inferior para el valor a generar
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número entero aleatorio entre [LOW, HIGH[
		  */

		static int next_int(const int LOW, const int HIGH);

		/**
		  * @brief Generar un valor entero aleatorio entre 0 y un valor dado
		  *
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número entero aleatorio entre [0, HIGH[
		  */

		static int next_int(const int HIGH);


		/**
		  * @brief Obtener el generador de aleatorios que se está utilizando
		  *
		  *
		  * @return Generador de aleatorios que se está utilizando
		  */

		static std::mt19937 get_generator();

};



void Random :: set_seed(const unsigned long semilla){
	generator_.seed(semilla);
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


#endif
