// Determine whether the input integer is odd or even.

#include <iostream>

int even(const int n)
{
    std::cout << n << " is even." << std::endl;
    return 1;
}

int odd(const int n)
{
    std::cout << n << " is odd." << std::endl;
    return 0;
}

int main(int argc, char* argv[])
{
    int n;
    std::cout << "Please input an integer: ";
    std::cin >> n;
    (n % 2 == 0) ? even(n) : odd(n);
}

// or
// std::cin >> n;
// (n % 2) ? (std::cout << n << "is even.") : (std::cout << n << "is odd.")
