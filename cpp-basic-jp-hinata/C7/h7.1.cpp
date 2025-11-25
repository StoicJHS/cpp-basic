#include <iostream>
#include <string>

int main()
{
    std::string txt;

    while (std::getline(std::cin, txt)) // read one by one
    {
        if (txt == "quit")
            break;
        // print out on the console
        std::cout << "->" << txt << std::endl;
    }
}