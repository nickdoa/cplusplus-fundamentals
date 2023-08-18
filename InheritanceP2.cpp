#include <iostream>
#include <cmath>

class shape{ 
    public:
        double area;
        double volume;
};
class cube : public shape{
    public:
        double side;
    cube(double side){
        this->side = side;
        this->area = pow(side,2) * 6;
        this->volume = pow(side,3);
    }
};
class sphere : public shape{
    public:
        double radius;
    sphere(double radius){
        this->radius = radius;
        this->area = pow(radius,2) * 3.14159 * 4;
        this->volume = (4/3.0) * 3.14159 * pow(radius, 3);
    }
};

int main() {

    cube cube1(10);
    sphere sphere1(5);

    std::cout << "Area: " << cube1.area << " units^2\n";
    std::cout << "Volume: " << cube1.volume << " units^3\n";

    std::cout << "Area: " << sphere1.area << " units^2\n";
    std::cout << "Volume: " << sphere1.volume << " units^3\n";

    return 0;
}