/* 
    제어구조 - 조건분기
*/
#include <iostream>

int main(int argc, char* argv[])
{
    int n;
    std::cout << "Please input an integer>";
    std::cin >> n;

    if (n < 1)
        std::cout << "Please input an integer greater or equal than 1. " << std::endl;
    else
        std::cout << n << " x 2 = " << n * 2 << std::endl;
}