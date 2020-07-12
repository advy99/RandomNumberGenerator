# RandomNumberGenerator

Tras varias prácticas utilizando un generador de números aleatorios distinto al disponible en cstdlib para C++, escrito en C (y con una implementación muy mejorable, tenía la semilla como variable global que podías modificar en cualquier momento), ya que la longitud de la secuencia de aleatorios de este era muy pequeña, y de cara a utilizarlo en proyectos más grandes (mi TFG básicamente), he decidido implementarlo como una clase de C++, donde no puedes modificar la semilla y esta embebido en una clase para que sea más cómodo.


# Estructura

Es bastante simple, cuenta con un hpp en la carpeta `include` y un cpp en la carpeta `src`:

- `random.hpp`: Cabecera de la clase, con atributos y métodos.
- `random.cpp`: Implementación de la clase y sus métodos.

En la carpeta `src` también se encuentra el fichero `main.cpp` con el que hay algunos ejemplos y pruebas.

## Invítame a un café

Todo mi trabajo esta publicado como software libre, aun así, si te ha resultado util y quieres invitarme a un café:

[![ko-fi](https://www.ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/Y8Y81WT9M)


