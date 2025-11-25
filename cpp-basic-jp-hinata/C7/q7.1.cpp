#include <iostream>
#include <string>

int main()
{
    double total = 0.0;
    std::string txt;

    while (1)
    {
        std::cout << ">";
        std::getline(std::cin, txt);
        if (txt == "quit")
            break;
        total += std::stod(txt);
    }
    std::cout << "Total=" << total << std::endl;
}