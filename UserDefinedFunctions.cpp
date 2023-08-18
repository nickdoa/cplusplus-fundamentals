#include <iostream>

void happyBirthday(std::string name, int age);

int main() {

    std::string name = "Nick";
    int age = 16;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string birthdayBoy, int age) {
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to dear " << birthdayBoy << "!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "You are " << age << " years old!\n";
}