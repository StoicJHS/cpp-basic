#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    int n;
    std::cout << "Enter hex-form integer:";
    std::cin >> std::hex >> n;

    // print as dec-form
    std::cout << n << std::endl;

    std::cout << "Enter oct-form integer:";
    std::cin >> std::oct >> n;
    // print as dec-form
    std::cout << n << std::endl;

    return 0;
}