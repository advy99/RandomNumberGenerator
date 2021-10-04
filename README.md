# RandomNumberGenerator

After many assignments using a different random number generator to the one available in C++'s stdlib, which was written in C (with an greatly improvable implementation, the seed was a global variable you could modify anytime), I've decided to implement it as a C++ class where the seed is a non-mutable private member with bigger projects, like my degree's thesis, in mind.

## Structure

RandomNumberGenerator is very simple.
You just need to include `random.hpp`, which contains the class's headers and its inline member functions.

You can build a quick test with `make` from `test/main.cpp`.

## Buy me a coffee!

All my work is published as free software.
If you find it useful and want to buy me a coffee, you can do so here:

[![ko-fi](https://www.ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/Y8Y81WT9M)
