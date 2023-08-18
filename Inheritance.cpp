#include <iostream>

class animal{ // parent class
    public: 
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

// (child class) : (name of parent class)
class dog : public animal { // child class
    private:
    void bark(){
        std::cout << "The dog goes woof\n";
    }
    public:
    void getBark(){
        bark();
    }
};

class cat : public animal{
    private: // private method meow()
    void meow(){
        std::cout << "The cat goes meow\n";
    }
    public: // use getter getMeow to use method meow
    void getMeow(){
        meow();
    }
};

int main() {

    // inheritance - a class can recieve attributes and methods from another class
    //               children classes inherit from a parent class 
    //               helps to reuse similar code found in multiple classes

    dog dog1;
    cat cat1;

    std::cout << dog1.alive << '\n';
    dog1.eat();
    dog1.getBark();
    cat1.getMeow();

    return 0;
}