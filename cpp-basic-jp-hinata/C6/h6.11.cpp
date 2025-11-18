#include <iostream>

int main(int argc, char* argv[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            std::cout << i << std::endl;
    }
}