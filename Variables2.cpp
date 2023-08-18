#include <iostream>

int main() {
    
    //integer (whole number)
    int age = 16;
    int year = 2023;
    int days = 7.5; //this will result in the number 7.5 being truncated into 7 as int cannot store decimals
    
    std::cout << days << std::endl;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    std::cout << price << '\n';

    //char (single character)
    char grade = 'A';
    char initial = 'D';
    char currency = '$';

    std::cout << currency << '\n'; 

    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    std::cout << student << '\n';

    //string (objects that represent a sequence of text)
    std::string name = "Nick";
    std::string date = "6/6/23";
    std::string food = "Burger";

    std::cout << name << '\n';
    
    std::cout << "Hello " << name << '\n'; //string literal
    std::cout << "Today is " << date << '\n';
    
    return 0;
}