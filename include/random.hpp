/**
  * @file random.hpp
  * @brief Fichero cabecera de la clase Random
  *
  */

#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

/**
  *  @brief Clase Random
  *
  * Una instancia del tipo Random será un generador de números aleatorios.
  *
  *
  * @author Antonio David Villegas Yeguas
  * @date Julio 2020
  */


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
		unsigned long SEED;
		const unsigned long int MASK = 2147483647L;
		const unsigned long int PRIME = 65539L;
		const double SCALE = 0.4656612875e-9D;


	public:

		/**
		  * @brief Constructor sin parámetros que iniciliza la semilla a un valor aleatorio
		  */

		Random();


		/**
		  * @brief Constructor con un parámetro, el valor de la semilla.
		  *
		  * @param seed Valor de la semilla
		  */

		Random(const unsigned long seed);



		/**
		  * @brief Obtener el valor de la semilla
		  *
		  * @return Valor actual de la semilla
		  */

		unsigned long getSeed() const;


		/**
		  * @brief Generar un valor real aleatorio entre [0, 1[
		  *
		  * @return Número aleatorio entre [0, 1[
		  */

		float getFloat();


		/**
		  * @brief Generar un valor real aleatorio entre dos valores dados
		  *
		  * @param LOW Límite inferior para el valor a generar
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número real aleatorio entre [LOW, HIGH[
		  */

		float getFloat(const float LOW, const float HIGH);

		/**
		  * @brief Generar un valor real aleatorio entre 0 y un valor dado
		  *
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número real aleatorio entre [0, HIGH[
		  */

		float getFloat(const float HIGH);


		/**
		  * @brief Generar un valor entero aleatorio entre dos valores dados
		  *
		  * @param LOW Límite inferior para el valor a generar
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número entero aleatorio entre [LOW, HIGH[
		  */

		int getInt(const int LOW, const int HIGH);

		/**
		  * @brief Generar un valor entero aleatorio entre 0 y un valor dado
		  *
		  * @param HIGH Límite superior para el valor a generar
		  *
		  * @return Número entero aleatorio entre [0, HIGH[
		  */

		int getInt(const int HIGH);

};

#endif
