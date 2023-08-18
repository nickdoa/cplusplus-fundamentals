#include <iostream>

int main() {

    // fill() function fills a range of elements with a specified value 
    // begin, end, value

    const int size = 99;
    std::string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3) * 2, "cheezborgir");
    fill(foods + (size/3) * 2, foods + size, "rice");
    
    for(std::string food : foods) {
        std::cout << food << '\n';
    }


    return 0;
}