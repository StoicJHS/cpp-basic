#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Please enter two integers:";
    int x, y;
    std::cin >> x >> y;

    std::cout << x << "+" << y << "=" << x + y << std::endl;

    return 0;

}