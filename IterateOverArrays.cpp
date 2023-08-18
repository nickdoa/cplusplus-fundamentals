#include <iostream>

int main() {
    std::string students[] = {"John Wick", "Cid Kagenou", "Kirby", "Wade"};

    // std::cout << students[0] << '\n';
    // std::cout << students[1] << '\n';
    // std::cout << students[2] << '\n';

    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int j = 0; j < sizeof(grades)/sizeof(char); j++) {
        std::cout << grades[j] << '\n';
    }
}