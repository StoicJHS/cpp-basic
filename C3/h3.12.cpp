#include <iostream>
#include <random>
int main()
{ 
    std::random_device rnd;
    std::mt19937 mt(rnd());

    for (int i = 0; i < 10; i++) {
        std::cout << mt() << std::endl;
    }

}