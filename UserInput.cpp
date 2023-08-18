#include <iostream>

int main()  {
    
    std::string name;
    int age;

    std::cout << "What is your age? --> "; 
    std::cin >> age;


    std::cout << "What is your name? --> "; //if we need to read a string that may contain spaces, use the getline function. std::getline(std::cin, name)
    std::getline(std::cin >> std::ws, name); // any whitespaces use getline. if we use cin before getline it will not work. use >> std::ws (eliminates new line statements)
  
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}