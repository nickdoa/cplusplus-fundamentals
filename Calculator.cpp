#include <iostream>
#include <cmath>

int main () {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";
    
    std::cout << "Enter number 1 --> ";
    std::cin >> num1;

    std::cout << "Enter number 2 --> ";
    std::cin >> num2;

    std::cout << "Enter either (+ - * /) --> ";
    std::cin >> op;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n'; 
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "That is not a valid response!\n";
            break;

    }
    
    std::cout << "**********************************";

    return 0;

}