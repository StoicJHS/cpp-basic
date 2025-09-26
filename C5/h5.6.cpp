#include <iostream>

int main(int argc, char* argv[])
{
    std::string s;

    std::cout << "Name >";
    std::cin >> s;

    std::cout << "Hello, " << s << std::endl;
}