#include <iostream>

int main()
{
    std::string s, str;
    while (1)
    {
        std::cout << "String (To exit, enter quit.) >";
        std::cin >> s;
        if (s == "quit")
            break;
        str += s + " ";

    }

    std::cout << str << std::endl;


}