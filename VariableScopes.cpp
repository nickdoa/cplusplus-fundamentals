#include <iostream>

int myNum = 3; // you should avoid global variables because they pollute the global namespace

void printNum();

int main() {

    // local variables are declared inside a function or block {}
    // global variables are declared outside of all functions (normally at the top)
    // variables defined inside of a function are more secure than global variables.
    // this is because functions cannot see inside of other functions.
    // precede variable name with "::" (scope resolution operator) to use global variable.

    int myNum = 1;

    printNum();
    std::cout << ::myNum << '\n';

    return 0;
}

void printNum() {
    int myNum = 2;
    std::cout << ::myNum << '\n';
}