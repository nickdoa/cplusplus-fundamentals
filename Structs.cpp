#include <iostream>

// identifier is "student"
// it is kind of like a new data type
struct student {
    std::string name;
    double gpa;
    bool enrolled = true; // you can set default values for members
}; // always end struct with semi colon.

int main() {

    // struct = a structure that group related variables under one name
    // can store many different data types (string, int, bool, etc.) 
    // basically an array, but one that can store different data types
    // variables in a struct are called "members"
    // members can be accessed with . "Class Member Access Operation"

    student student1; // create a variable with name student1 with "student" data type
    student1.name = "Spongebob"; // assigning members to variable student1
    student1.gpa = 3.2;

    student student2;
    student2.name = "Patrick"; 
    student2.gpa = 2.1;

    student student3;
    student3.name = "Squidward"; 
    student3.gpa = 1.5;
    student3.enrolled = false;
    
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}