#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    std::string s;

    std::cout << "Number(String)>";
    std::cin >> s;

    std::cout << "integer=" << std::stoi(s) << std::endl;
    std::cout << "real=" << std::stod(s) << std::endl;
}

/*
문자열에서 수치로 변환하는 함수 (all for C++):
    stoi(): string -> int
    stol(): string -> long
    stoul(): string -> unsigned long
    stoll(): string -> long long
    stoull(): string -> unsigned long long
    stof(): string -> float
    stod(): string -> double
    stold(): sring -> long double
*/