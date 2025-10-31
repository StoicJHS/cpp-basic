#include <iostream>
#include <ctime>
#include <locale>

int main(void)
{
    std::time_t t;
    struct tm* ptm;

    std::setlocale(LC_ALL, "ja_JP"); 

    // acquire local time
    t = std::time(NULL);

    // convert date/time
    ptm = std::localtime(&t);

    std::cout << "Current time (Japan) ="
              << std::asctime(ptm) << std::endl;

    std::cout << ptm->tm_year + 1900 << "-"
              << ptm->tm_mon + 1 << "-"
              << ptm->tm_mday << " "
              << ptm->tm_hour << ":"
              << ptm->tm_min << ":"
              << ptm->tm_sec << "." ;

    return 0;

}