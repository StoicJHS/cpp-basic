// strcat

#include <iostream>
#include <cstring>

int main(void)
{
    char dest[32] = "Good ";
    char src[] = "morning!";

    strcat(dest, src);
    std::cout << dest << std::endl;
}

// 교훈: '\0' 등의 존재등으로 인해 왠만해서는 문자배열 보다는 string을 쓰는 것이 안전하다! 