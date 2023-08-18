#include <iostream>

void walk(int steps);

int main() {

    // recursion? what is it? 
    // its a programming technique where a function invokes itself from within.
    // in simple terms, recursion solves complex problems by breaking them down into smaller versions of the same problem.

    // iterative vs recursive

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

    return 0;
}

// ITERATIVE APPROACH 
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
}

/* RECURSIVE APPROACH
void walk(int steps){
    if (steps > 0) {
        std::cout << "You take a step!\n";
        walk(steps--); // decrement steps by 1 and repeat function "walk", 
                       // effectively creating a function within a function within a function... etc.
    }
}
*/


