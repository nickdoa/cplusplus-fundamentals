#include <iostream>
#include <cmath>

// cplusplus.com

int main() {

    double x = 3.14;
    double y = 4;
    double z;
    double min;

    z = std::max(x, y);
    min = std::min(x, y);

    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-20);
    // z = round(x);
    // z = ceil(x); (ceil means ceisling, rounding up)
    // z = floor(x); (rounds down always)

    std::cout << z << '\n';
    std::cout << min;
    return 0;
}