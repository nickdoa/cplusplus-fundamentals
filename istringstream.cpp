#include <iostream>
#include <sstream>

int main() {
    std::string address = "1234 Sesame Street";

    std::istringstream iss(address);

    int home;
    std::string name;
    std::string type;

    iss >> home >> name >> type;

    std::cout << "Home number: " << home << '\n';
    std::cout << "Street name: " << name << '\n';
    std::cout << "Type: " << type << '\n';

    return 0;

}