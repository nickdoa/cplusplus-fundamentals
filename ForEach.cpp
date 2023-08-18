#include <iostream>

int main() {

    // for each loop: loop that eases the traversal over an 
    // iterable data set, such as an array

    std::string students[] = {"John Wick", "Cid Kagenou", "Kirby", "Wade"};

    // add data type, give it a name, add a colon, and then iterable data set
    //       1          2    3    4
    for (std::string student : students) {
        std::cout << student << '\n';    
    }
    
    // example 2

    int grades[] = {54, 65, 76, 78, 80};

    for (int grade : grades) {
        std::cout << grade << '\n';
    }

    return 0;
}