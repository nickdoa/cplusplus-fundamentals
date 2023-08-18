#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {

    bakePizza("cheese", "pepperoni");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

// functions can share the same name but they must have different parameters.
// This is known as an overloaded function.
// A functions name + its parameters is called a function signature. (like an ID)