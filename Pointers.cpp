#include <iostream>

int main() {

    // pointers are variables that store a memory address of another variable
    // sometimes it is easier to work with an address

    // & address of operator
    // * dereference operator

    std::string name = "Nick";
    int age = 16;
    std::string freePizzas[5] = {"Pineapple", "Pepperoni", "Cheese", "Barbecue", "Combination"};
    
    // common naming convention: *p(name of pointer variable)
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << std::endl;
    // display whatever value is located at the address that is stored within the pointer of pointer Age
    std::cout << *pAge << std::endl;
    std::cout << freePizzas << '\n';
    std::cout << pFreePizzas << '\n';
    std::cout << *pFreePizzas << '\n';

    
    /*
    for(int i = 0; i < sizeof(freePizzas)/sizeof(freePizzas[0]); i++) {
        std::cout << pFreePizzas[i] << '\n';
    }
    */

    return 0;
}