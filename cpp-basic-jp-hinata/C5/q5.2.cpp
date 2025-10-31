#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    int s1;
    int s2;

    std::cin >> s1;
    std::cin >> s2;

    std::cout << std::to_string(s1) + std::to_string(s2) << std::endl;
}