#include <iostream>
#include <cmath>

using namespace std; // practicing using namespaces and using function lol

int main() {

    double a;
    double b;
    double c;
    
    cout << "Enter side a = ";
    cin >> a;

    cout << "Enter side b = ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2)); 

    cout << "Hypotenuse = " << c;

}