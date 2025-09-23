#include <iostream>
#include <random>

int main()
{
    std::random_device rnd;
    // Generate ten random numbers
    for (int i = 0; i < 10; ++i)
        std::cout << rnd() << std::endl;
}