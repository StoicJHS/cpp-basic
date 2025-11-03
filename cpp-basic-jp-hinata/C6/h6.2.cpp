#include <iostream>

int main(int argc, char* argv[])
{
    int x;
    std::cout << "Please input an integer:";
    std::cin >> x;

    if (x>0) {
        std::cout << x << " is positive." << std::endl;
    } else if (x<0) {
        std::cout << x << " is negative." << std::endl;
    } else {
        std::cout << x << " is zero." << std::endl;
    }
}