#include <iostream>

int main(int argc, char* argv[])
{
    int c;
    while ((c = getc(stdin)) != '\n')
        putc(c,stderr);
}