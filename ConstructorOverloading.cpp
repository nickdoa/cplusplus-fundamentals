#include <iostream>

class pizza{
    public:
        std::string topping1;
        std::string topping2;
    pizza(){

    }
    pizza(std::string topping1){
        this-> topping1 = topping1;
    }
    pizza(std::string topping1, std::string topping2){
        this-> topping1 = topping1;
        this-> topping2 = topping2;
    }
};

int main() {

    // overloaded constructors are when we have multiple constructors with the same name
    // but with different parameters. allows for varying arguments when instantiating an object.

    pizza pizza1("pepperoni");
    pizza pizza2("mushrooms", "cheese");
    pizza pizza3;

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
}
