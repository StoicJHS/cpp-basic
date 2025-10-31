#include <iostream>

int main()
{
    int a;
    std::cout << "Please input an integer:";
    std::cin >> a;

    std::cout << (a << 1) << std::endl;
    std::cout << (a << 2) << std::endl;

    return 0;
}