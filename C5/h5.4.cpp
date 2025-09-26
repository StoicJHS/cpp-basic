#include <iostream>

void printstr(const std::string s)
{
    // std::cout << s << std::endl;
    std::cout << "length=" << s.length();
    std::cout << "capacity=" << s.capacity() << std::endl;
}

int main(void)
{
    std::string s;
    printstr(s);
    for (int i=0; i<10; i++)
    {
        s += "1234567890abcdefghijklmn";
        printstr(s);
    }
}