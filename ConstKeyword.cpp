#include <iostream>

int main()  {
    const double PI = 3.14159; //const allows for variables to not be changed. common naming convention for constants is to have them in all uppercase.
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << '\n';

    const int LIGHT_SPEED = 299792458;
    const int HEIGHT = 1080;
    const int WIDTH = 1920;

    return 0;
}