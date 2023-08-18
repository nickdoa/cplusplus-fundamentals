#include <iostream>
#include <string>

std::string string(std::string &a);

int main() {
    std::string x = "Hello ";
    std::string length = string(x);
    std::cout << length;
}
std::string string(std::string &a) {
    a.append("slowsilver03");
    return a;
}