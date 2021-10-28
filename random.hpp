/**
  * @file random.hpp
  */

#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

/**
  * @brief A Random type instance will be a random number generator.
  * @author Antonio David Villegas Yeguas
  * @date Julio 2020
  */

#include <random>


class Random{
	private:
		static inline std::mt19937 generator_{std::random_device()()};
		Random() = delete;

	public:

		/**
		 * @brief Seed initialisation
		 * @param seed New seed for the generator
		 */

		static inline void set_seed(const unsigned long seed);

		~Random() = default;

		Random(const Random & otro) = delete;
		Random & operator = (const Random & otro) = delete;

		/**
		  * @brief Generate a new random double in the interval [0, 1[
		  */

		static inline double next_double();

		/**
		  * @brief Generate a new random double in the interval [`LOW`, `HIGH`[
		  */

		static inline double next_double(const double LOW, const double HIGH);

		/**
		  * @brief Generate a new random double in the interval [0, `HIGH`[
		  */

		static inline double next_double(const double HIGH);

		/**
		  * @brief Generate a new random int in the interval [`LOW`, `HIGH`[
		  */

		static inline int next_int(const int LOW, const int HIGH);

		/**
		  * @brief Generate a new random int in the interval [0, `HIGH`[
		  */

		static inline int next_int(const int HIGH);

		/**
		  * @brief Returs the inner generator
		  */

		static inline std::mt19937 get_generator();
};

void Random :: set_seed(const unsigned long seed){
	generator_.seed(seed);
}

double Random :: next_double(){
	std::uniform_real_distribution<> dis(0, 1.0);
	return dis(generator_);
}

double Random :: next_double(const double LOW, const double HIGH){
	std::uniform_real_distribution<> dis(LOW, HIGH);
	return dis(generator_);
}

double Random :: next_double(const double HIGH){
	return next_double(0, HIGH);
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
