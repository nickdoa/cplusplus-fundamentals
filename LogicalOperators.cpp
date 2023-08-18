#include <iostream>

int main() {

    int temp;
    bool sunny = true;

    /*
    std::cout << "Enter the temperature --> ";
    std::cin >> temp;

    if(temp > 0 && temp < 0) {
        std::cout << "The temperature is good!";
    }
    else {
        std::cout << "The temperature is bad.";
    }
    */

    /*
    std::cout << "Enter the temperature --> ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad.";
    }
    else {
        std::cout << "The temperature is good!";
    }
    */

    
    std::cout << "Enter the temperature --> ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad.\n";
    }
    else {
        std::cout << "The temperature is good!\n";
    }

    if(!sunny) {
        std::cout << "It is cloudy outside.";
    }
    else {
        std::cout << "It is sunny outside!";
    }

    return 0;
}