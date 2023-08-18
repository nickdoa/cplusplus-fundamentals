#include <iostream>

class cars {
    public:
        std::string maker;
        std::string model;
        int year;
        std::string color;
    cars(std::string maker, std::string model, int year, std::string color){
        this-> maker = maker;
        this-> model = model;
        this-> year  = year;
        this-> color = color;
    }
        
}; 

int main() {

    cars car1("pagani", "zonda r", 2023, "black");
    cars car2("lamborghini", "aventador", 2023, "white");

    std::cout << car1.maker << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';
    
    std::cout << car2.maker << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';
    
    return 0;
}