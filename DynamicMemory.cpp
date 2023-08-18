#include <iostream>

int main(){

    // what is dynamic memory? = dynamic memory is memory that is allocated or reserved
    //                           after the program is already compiled and running. 
    //                           use the 'new' operator to allocate memory in the heap 
    //                           rather than the stack.
    
    // useful for when we don't know how much memory we will need. 
    // makes programs more flexible especially when accepting user input.

    // EXTRA NOTES: STACK VS. HEAP???

    // STACK:
    // stack is in simple terms a temporary storage area for smal things like numbers, names,
    // or simple pieces of information. you can use the stack to keep track of these 
    // small things, like numbers you're using in a math calculation. it's quick and easy to use.
    // if you put too many things in the stack, it's like trying to pile too many plates 
    // on top of each other. they might fall and break (stack overflow)

    // HEAP:
    // heap on the other hand is like a big storage area where you can put things you don't need right away,
    // but you want to keep for later. it is used for larger things such as a collection of names or a list of tasks.
    // you can put things in the heap whne you need more space than the stack can offer.
    // however, once you've done with something you put in the heap, you have to tell the computer you are done
    // otherwise it may get messy and you might run out of space. cleaning up after yourself basically

    int *pNum = NULL;

    pNum = new int; // pNum is pointing to a memory location where we will store an int

    *pNum = 3;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    // use delete operator when done with heap operating space

    delete pNum;

    return 0;
}