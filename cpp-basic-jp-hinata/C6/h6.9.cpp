#include <iostream>

int main(int argc, char* argv[])
{
    char c;
    do
    {
        c = getchar();
        if (c == ' ')
            continue;
        putchar(c);
    } while (c != '\n');
    
}