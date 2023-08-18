#include <iostream>

int main() {

    // memory address = a location in memory where data is stored
    // a memory address can be accessed using an ampersand "&"


    std::string name = "Nick";
    int age = 16;
    bool student = true;

    std::cout << &name << '\n'; // returns hex address
    std::cout << &student << '\n';
    std::cout << &age << '\n';

    return 0;
}