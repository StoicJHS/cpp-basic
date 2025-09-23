#include <iostream>
#include <random>

int main()
{
    std::random_device rnd;
    std::mt19937 mt(rnd());
    // 0~99 random number generator
    std::uniform_int_distribution<> rand100(0,99);
    for (int i = 0; i <20; ++i)
        std::cout << rand100(mt) << std::endl;
}