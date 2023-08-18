#include <iostream>

class cars {
    public:
        std::string maker;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "This car is accelerating\n";
        }
        void brake() {
            std::cout << "This car is braking\n";
        }
        void crash() {
            std::cout << "This car is crashing\n";
        }
        
}; 

int main() {

    cars car1;
    
    car1.maker = "pagani";
    car1.model = "zonda";
    car1.year = 2023;
    car1.color = "black";

    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();
    car1.crash();
    
    return 0;
}