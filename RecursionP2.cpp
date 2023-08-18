#include <iostream>

int factorial(int num);

int main() {

    std::cout << factorial(10);

    return 0;
}

// ITERATIVE APPROACH 

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

/* opposite if it was the traditional way of caluclating a factorial

int factorial(int num) {
    int result = 1;
    for (int i = num; i >= 1; i--) {
        result = result * i;
    }
    return result;
}

*/

/* RECURSIVE APPROACH

int factorial(int num){
    if (num > 1) {
        return num * factorial(num--);
    }
    else{
        return 1;
    }
}

*/