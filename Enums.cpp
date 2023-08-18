#include <iostream>

enum day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, 
          Thursday = 4, Friday = 5, Saturday = 6};
          
// you can associate values with these names
// when you don't, the compiler implicity assigns them numbers starting from zero
// like shown above. except i explicity assigned them

int main() {

    // enums are user defined data types that consist of paired named-integer constants
    // great if you haved a set of potential options

    day today = Sunday;

    // "day" is the data type
    // "today" is the variable name
    // we asign today sunday
  
    switch(today){ // examine variable "today"
        case Sunday: std::cout << "It is Sunday!\n";
                       break;
        case Monday: std::cout << "It is Monday!\n";
                       break;
        case Tuesday: std::cout << "It is Tuesday!\n";
                       break;
        case Wednesday: std::cout << "It is Wednesday!\n";
                       break;
        case Thursday: std::cout << "It is Thursday!\n";
                       break;
        case Friday: std::cout << "It is Friday!\n";
                       break;
        case Saturday: std::cout << "It is Saturday!\n";
                       break;
    }
        
    return 0;
}