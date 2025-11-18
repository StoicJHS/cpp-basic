#include <iostream>

int main(int argc, char* argv[])
{
    int c, n;
    n = 0;
    // iterate until line break
    while (1) {
        c = fgetc(stdin);
        if (c == '\n')
            break;
        n++;
    }
    std::cout << n + 1
    << "bytes as input." << std::endl;
}