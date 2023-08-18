#include <iostream>

int main() {

    std::string name;
    
    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    /*
    while(1==1) {
        std::cout << "HELP! IM STUCK IN AN INFINITE LOOP!";
    }
    */

    std::cout << "Hello " << name;

}