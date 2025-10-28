#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::string str = "Hello, 즐거운 한국어 C++";
    std::cout << str << std::endl;

    int pos = str.find("한국어");
    std::cout << str.substr(pos) << std::endl;
}