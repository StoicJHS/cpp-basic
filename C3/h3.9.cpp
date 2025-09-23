#include <iostream>

int main(int argc, char* argv[])
{
    float x;
    double y;

    x = 0.8f * 1.7f;
    y = 0.8 * 1.7;

    if (x==y)
        std::cout << x << "and" << y << " are equal." << std::endl;
    else
        std::cout << x << "and" << y << " are not equal." << std::endl;


    return 0;
}