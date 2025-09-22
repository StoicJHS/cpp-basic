#include <iostream>

int main() 
{
    int a,b,c;
    std::cout << "*********************";
    std::cout << std::endl;
    std::cout << "Sum of three integers";
        std::cout << std::endl;
    std::cout << "*********************";
    std::cout << std::endl;
    std::cout << "Enter three integers:";


    std::cin >> a >> b >> c;

    std::cout << "Sum of three integer ( " << a << " , " << b <<  " , " << c << " ) is " << a+b+c << "." << std::endl;

    return 0;

}