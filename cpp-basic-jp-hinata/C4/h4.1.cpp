#include <iostream>

int positive(const int n)
{
    std::cout << n << "は正の値です。" << std::endl;
    return 1; 
}

int negative(const int n)
{
    std::cout << n << "は負の値です。" << std::endl;
    return 0;
}

int main(int argc, char* argv[])
{
    int n;
    std::cout << "正か負の整数値を入力してください:";
    std::cin >> n;
    (n>= 0) ? positive(n) : negative(n);
}

