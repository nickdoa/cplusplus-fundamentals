#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    swap(x, y); // passed by reference, not value 
    
    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y) { // you should pass by reference as often as possible unless there is a reason to pass by value
    std::string temp;
    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';

    // without using the address of operator (&), the function will 
    // receive the arguments by value instead of by reference, 
    // which means it will create local copies of x and y inside the swap function.
}