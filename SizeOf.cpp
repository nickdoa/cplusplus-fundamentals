#include <iostream>

int main() {

    // sizeof() determines the size in bytes of a data type, 
    //          variable, class, object, etc. Useful for 
    //          determining the size of an array.


    std::string name = "Gorlock"; // will return 32 bytes because it is a reference data type
    double gpa = 2.5; // lol, returns 8 bytes because it is the maximum size allocated to the double variable
    char grade = 'F'; // 1 byte
    bool student = true; // 1 byte
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // 5 bytes (1 * 5 chars)
    std::string imLiterallyHim[] = {"David Martinez", "Mr. Robot", "Patrick Bateman", "Ryan Gosling"};


    std::cout << sizeof(imLiterallyHim)/sizeof(std::string) << " elements\n"; 

    return 0;
}