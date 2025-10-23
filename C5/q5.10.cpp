#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    double n; // 정수만을 다루고 싶다면 int로 정의

    std::cout << "Number?";
    std::cin >> n;

    std::string s = std::to_string(n);

    std::cout << s << std::endl;
}

// to_string(): number -> string (C+11)
// to_wstring(): number -> wstring (C+11)