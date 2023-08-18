#include <iostream>

class student {
    public:
        std::string name;
        int age;
        double pslRating;

    student(std::string x, int y, double z){ // constructor (think of it like a function)
        name = x; // if parameter names are different from attribute names, you dont need "this->(name)" 
        age = y; 
        pslRating = z;
    }
};

int main() {

    // constructor = special method that is automatically called when an object is instantiated
    // useful for assigning values to attributes as arguments

    // when you hear the word "instantiated" in coding, think of it as 
    // creating a real thing (an object) from a plan (a class), and 
    // constructors are the workers that make sure everything is properly
    // set up for you.

    student student1("Francisco Lachowski", 32, 9.5); // when we instantiate our student object, we will pass in these values as arguments to the constructor 
    student student2("Jordan Barrett", 26, 9.5);
    student student3("Sean O'Pry", 34, 9.5);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.pslRating << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.pslRating << '\n';
    
    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.pslRating << '\n';

    return 0;
}