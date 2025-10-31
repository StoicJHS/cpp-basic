#include <iostream>

int main(int argc, char* argv[])
{
    std::string str = "Hello, Dogs";

    // Find string "Dog"
    int pos = (int)str.find("Dog");
    if (pos != std::string::npos)
        std::cout << "Dog is in " << pos+1 << "-th letters." << std::endl;
    else
        std::cout << "Dog is not in here." << std::endl;

    // print 8th ~ 
    std::cout << str.substr(7) << std::endl;

    std::string txt = "C++";
    std::cout << "Hello," + txt << std::endl;

}