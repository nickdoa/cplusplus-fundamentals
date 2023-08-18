#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /*
    if (name.length() > 12) { // gives us the length of a string
        std::cout << "Your name cannot be over 12 characters long!";
    } 
    else {
        std::cout << "Welcome " << name;
    }
    */

    /*
    if(name.empty()) {
        std::cout << "You did not enter your name!";
    }
    else{
        std::cout << "Hello " << name;
    }
    */

    /*
    name.clear();
    
    std::cout << "Hello " << name;
    */

    /*
    name.append("@gmail.com");

    std::cout << "Your username is now " << name;
    */

    // std::cout << name.at(0);

    /*
    name.insert(0, "@");

    std::cout << name;
    */

    // std::cout << name.find(' ');

    name.erase(0, 3);

    std::cout << name;

    return 0;
}