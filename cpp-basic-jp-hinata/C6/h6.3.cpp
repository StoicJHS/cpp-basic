#include <iostream>

int main(int argc, char* argv[])
{
    int n;
    std::cout << "Please input an integer:";
    std::cin >> n;

    switch (n)
    {
    case 0:
        std::cout << "Zero" << std::endl;
        break;
    case 1:
        std::cout << "One" << std::endl;
        break;
    default:
        std::cout << "Other" << std::endl;
        break;
    }

    std::cout << "switch...case...done" << std::endl;

}