// fgetstr

#include <iostream>
#include <cstring>

int main(void)
{
    char buff[256];

    std::cout << "Your name:";
    fgets(buff, 255, stdin);
    buff[strlen(buff)-1] = '\0';

    std::cout << "Hello, " << buff << std::endl;
}