#include <iostream>
/* ordinary overloaded functions:

int max(int x, int y) {
    return (x > y) ? x : y;
}

double max(double x, double y) {
    return (x > y) ? x : y;
}

char max(char x, char y) {
    return (x > y) ? x : y;
}

*/

// compiler doesn't know what T is, so add template parameter declaration
// T is common naming convention, think of it like T as in Thing. U comes after T alphabetically hence the U for the second template name
template <typename T, typename U>

// function template 

// we aren't sure what data type (its a Thing, thing x thing y etc.)

auto max(T x, U y) { // set to auto. doing this will allow compiler to deduce what the return data type shoudld be.
    return (x > y) ? x : y;
}

int main() {

    // what is a function template? 
    // it describes what a function looks like
    // can be used to generate as many overloaded functions as needed,
    // each using different data types.

    std::cout << max(1, 3.2) << '\n';

    return 0;
}