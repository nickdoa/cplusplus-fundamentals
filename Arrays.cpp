#include <iostream>

int main() {
    //array = a data structure that can hold multiple values. they are accessed by index numbers.

    //std::string cars[] = {"Pagani", "Lamborghini", "Koenigsegg"};
                          //   0            1              2
    
    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Ferrari";
    cars[2] = "Bugatti";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}