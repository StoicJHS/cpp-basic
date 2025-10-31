#include <iostream>

int main()
{
    int i = 1;
    long l = 1234567;
    long long ll = 1234567890;

    std::cout << "sizeof(int)=" << (int)sizeof(i) << std::endl;
    std::cout << "sizeof(long)=" << (int)sizeof(l) << std::endl;
    std::cout << "sizeof(long long=" << (int)sizeof(ll) << std::endl;

    return 0;

}