#include <iostream>

int main(int argc, char* argv[])
{
    int x = 0;
    int i = 0;
    do {
        x += i;
        i++;
    } while (i <11);

    std::cout << x << std::endl;
}