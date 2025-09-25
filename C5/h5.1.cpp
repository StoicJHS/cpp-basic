#include <iostream>

int main()
{
    char c;
    std::cin >> c;
    std::cout << c << "="
        << std::uppercase << std::hex << (int)c << std::endl;
}