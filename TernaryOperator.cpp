/*  
    parenthesis are optional
    ternary operator ?: = replacement to an if else statement
    condition ? expression1 : expression2;
*/ 

#include <iostream>

int main() {
    
    // int grade = 75; 
    // (grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail!";

    // int number = 9;
    // number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";
    
    bool hungry = true;
    // hungry == true ? std::cout << "You are hungry" : std::cout << "You are not hungry";
    std::cout << (hungry ? "You are hungry" : "You are not hungry");

    return 0;
}