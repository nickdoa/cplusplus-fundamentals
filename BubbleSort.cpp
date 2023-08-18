#include <iostream>

void sort(int array[], int size);

int main() {

    int array[] = {10, 4, 2, 7, 8, 1, 3, 5, 9, 6};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array) {
        std::cout << element << " ";
    }
} 
void sort(int array[], int size) {
    
    int temp;

    // why size - 1? we dont need to compare the last element to anything
    // the larger values will naturally gravitate towards the end of the array
    for(int i = 0; i < size - 1; i++) {
        // once we place larger elements towards the right of the array,
        // they should already be in order. we dont need to sort any elements
        // that are already sorted, hence the size - i - 1
        for (int j = 0; j < size - i - 1; j++) {
        //  if element on the left (j) is larger than the right element (j + 1)
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
} 