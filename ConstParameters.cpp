#include <iostream>

void printInfo(const std::string &name, const int &age);

int main() {

    // const parameter = paramater that is effectively read-only code
    //                   more secure and conveys intent
    //                   useful for references and pointers

    // tells other programmers dont mess with this value
    // useful with references so that nobody can change the value found at that reference
    // useful with pointers so that nobody can address of where a pointer is pointing to

    std::string name = "Nick";
    int age = 16;
    
    printInfo(name, age);

    return 0;
}
void printInfo(const std::string &name, const int &age) {
    std::cout << name << '\n';
    std::cout << age << '\n';
}