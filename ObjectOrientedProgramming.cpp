#include <iostream>
// class (name of class) {}
class human {
    public: // access modifier, attributes and methods are PUBLICly accessable
        std::string name = "rick";
        std::string occupation = "scientist"; // attributes // you can assign default attributes as well
        int age = 70 ;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n"; // methods
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
}; // add semicolon to end of class; similar to structs and enums

// we can use this class as a blueprint to create a human object.
// each human object will have a name, occupation, and age.
// they can also eat, drink, and sleep

int main() {

    // object = a collection of attributes and methods
    // attributes are characteristics of an object
    // methods are functions that an object can perform
    // can be used to mimic real world items (ex. phone, book, dog)
    // think of attributes as characteristics - what would a phone have?
    // model, service provider, battery level, version number
    // what actions can a phone perform?
    // they can make a call, play games, send texts
    // created from a class which acts as a blueprint

    human human1;
    human human2;

    human1.name = "nickdoa";
    human1.occupation = "student"; // similar to structs, use . to access members
    human1.age = 69;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat(); // invoke functions using . and then function()
    human1.drink();
    human1.sleep();
    
    human2.name = "byung";
    human2.occupation = "artist"; // similar to structs, use . to access members
    human2.age = 90;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat(); // invoke functions using . and then function()
    human2.drink();
    human2.sleep();

    // In programming, a class is like a blueprint, and an object is like
    // the real thing you create based on that blueprint.

    return 0;
}