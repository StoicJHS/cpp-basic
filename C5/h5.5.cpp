#include <iostream>

int main(void)
{
    std::string s = "Hello, Worlds!";
    std::string::iterator it = s.begin();
    for (; it != s.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}