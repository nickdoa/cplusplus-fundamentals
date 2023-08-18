#include <iostream>

int main() {

    // Null value = a special value that means something has not value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword that represents a null pointer literal

    // nullptrs are helpful when determining if an address was successfully assigned to a pointer
    
    int *pointer = nullptr;
    int x = 123;

    // be careful that your code isnt dereferencing * null or pointing to free memory
    // this will cause undefined behavior
    // we make variable pointer point to the address of x
    
    /*
    this line assigns the memory address of the variable x
    to the pointer variable pointer. now pointer points to the 
    memory location of x, and it can be used to 
    access or modify the value of x.
    */

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "address was not assigned!\n";
    }
    else {
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}