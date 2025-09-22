#include <iostream>

int main(int argc, char* argv[])
{
    int x;
    std::cout << "Please enter an integer:";
    std::cin >> x;

    std::cout << "The twice of " << x << " is " << x * 2 << std::endl;

    return 0;
}