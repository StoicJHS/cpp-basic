// 0 ~ 255까지의 정수의 난수를 10개 생성하여 16진수로 표시하는 프로그램

#include <iostream>
#include <random>

int main()
{
    std::random_device rnd;
    std::mt19937 mt(rnd());
    std::uniform_int_distribution<> rand255(0, 255);
    for (int i = 0; i < 10; i++)
        std::cout << std::hex << rand255(mt) << std::endl;

}

// 별해

// #include <iostream>
// #include <random>

// int main()
// {
//     std::random_device rnd;
//     // generate ten random number
//     for (int i = 0; i < 10; i++)
//     {
//         double v = rnd() * 255.0 / rnd.max();
//         std::cout << std::hex << (int)v << std::endl;
//     }
// }