#include <iostream>
#include <string>
int main()
{
    std::string name = "Spencer";
    int age = 19;
    int nextAge = age + 1;
    std::cout << "My name is " << name << std::endl;
    std::cout << "I am " << age << std::endl;
    std::cout << "Next year I will turn " << nextAge << std::endl;
    return 0;
}