#include <iostream>
#include <string> 
#include <math.h>

int main(int argc, char* argv[])
{
    // 문자상수 정의 (문자상수의 정의에는 ''를 사용할 필요가 있다)
    const char c = 'J';

    // 문자열상수 (문자열상수의 정의에는 ""를 사용한다)
    const std::string ID = "StoicJHS"; // string은 표준C++의 클래스 

    // 실수값의 상수 
    const double hbarc = 197.3;
    const double pi = M_PI;
    const double radius = 5.0;

    // 정수값의 강수
    const int n = 10;

    // 포인터 선언. 상수 변수의 포인터밖에 대입할 수 없다
    char name[256] = "StoicJHS";
    char *const pname = name; // 상수 포인터

    std::cout << "The area of a circle with radius " << radius << " is " << pi*std::pow(radius,2) << "." << std::endl; 

    return 0;

}