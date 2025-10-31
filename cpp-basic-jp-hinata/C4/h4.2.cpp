#include <iostream>
#include <string>

struct Member
{
    std::string name;
    std::string email;
    int age;
};

int main(int argc, char* argv[])
{
    int n = 0;
    std::cout << "sizeof n=" << sizeof n << std::endl;
    std::cout << "sizeof(int)=" << sizeof(int) << std::endl;

    double v = 0.0;
    std::cout << "sizeof v=" << sizeof v << std::endl;
    std::cout << "sizeof(double=" << sizeof(double) << std::endl;
    std::cout << "sizeof(fload)=" << sizeof(float) << std::endl;

    std::cout << "sizeof(Member)=" << sizeof(Member) << std::endl;
}