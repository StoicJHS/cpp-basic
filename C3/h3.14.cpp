// normal distriumion

#include <iostream>
#include <random>

int main()
{
    std::random_device rnd;
    std::mt19937 mt(rnd());
    std::normal_distribution<> norm(70.0, 10.0);
    for (int i=0; i <10; i++)
        std::cout << norm(mt) << std::endl;
}