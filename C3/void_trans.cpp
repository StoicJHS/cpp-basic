#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    // 任意の型の値のポインタを保存する
    void* pv;

    // 文字列のポインタを(void *)でキャストして保存する
    pv = (void*)(new std::string("Hello"));

    // pvの16進数表記を表示する
    std::cout << "pv=" << std::hex << pv << std::endl;
}