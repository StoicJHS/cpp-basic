#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
    char cs[] = "あいうえおkakikukeko사시스세소";
    std::string s = "aiueoかきくけこ";

    std::cout << cs << std:: endl << "長さ" << strlen(cs) << std::endl;
    std::cout << s << std::endl << "長さ" << s.length() << std::endl;
}