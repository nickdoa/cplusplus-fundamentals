#include <iostream>

struct car{
    std::string model;
    int year;
    std::string color;
};

void printCar(car &car); // function declarations come after struct definitions
void paintCar(car &car, std::string color);

int main() {
    
    car car1;
    car car2;

    car1.model = "Pagani";
    car1.year = 1992;
    car1.color = "White";
    
    car2.model = "Koenigsegg";
    car2.year = 1994;
    car2.color = "Green";

    paintCar(car1, "red"); 
    paintCar(car2, "black");

    printCar(car1); // structs are passed by value by default
    printCar(car2); 

    return 0;
}

void printCar(car &car){ // passing by reference (&)
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(car &car, std::string color){ // passing by reference (&)
    car.color = color;
}