#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main() {

    std::string foods[] = {"pizza", "cheeseburger", "hotdog", "sushi", "kimchi", "rice", "seaweed"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if (index != -1) {
        std::cout << myFood << " is at index " << index << '\n';  
    }
    else {
        std::cout << myFood << " is not in the array!" << '\n';
    }

    return 0;
}
int searchArray(std::string array[], int size, std::string element) {

    for(int i = 0; i < size; i++) {
        if(array[i] == element) {
            return i;
        }
    }
    return -1; // sentinel number meaning value not found
}