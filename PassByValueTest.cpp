#include <iostream>

void modifyByValue(int num) {
    num = num + 10; // Modifying the copy of 'num'.
}

int main() {
    int x = 5;
    modifyByValue(x); // 'x' remains unchanged because the function modified a copy of 'x'.
    
    std::cout << x;
    
    return 0;
}

