#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    // Multiplication table
    for (int i=1; i<10; i++)
    {
        for (int j=1; j<10; j++)
            std::cout << std::setw(3) << i*j;
        std::cout << std::endl;

    }
}