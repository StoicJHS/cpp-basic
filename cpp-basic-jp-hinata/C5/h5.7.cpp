#include <iostream>
#include <cstring>

int main(void)
{
    char s[] = "Hello, C";
    std::cout << s << "The length of the string=" << strlen(s) << std::endl;
    std::cout << s << "The length of the list=" << sizeof(s) << std::endl;
}

// 리스트로 만들 때 가장 마지막에 '\0'가 들어가고 이를 통해서 문자열의 마지막을 식별한다.
// strlen은 이를 제외한 것을, sizeof은 '\0'까지를 포함한 갯수를 반환한다.