#include <iostream>
#include <string>

struct Member
{
    std::string name;
    int age;
} *pMember;

int main(int argc, char* argv[])
{
    pMember = new Member;

    pMember->name = "Tommy";
    pMember->age = 23;

    std::cout << "pMember->name=" << pMember->name << std::endl;
    std::cout << "pMember->age=" << pMember->age << std::endl;

    delete pMember;
    pMember = NULL;
}
