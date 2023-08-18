/* namespace = provides a solution for preventing name conflicts in large projects.
    each entity needs a unique name. A namespace allows for identically named entities
    as long as the namespaces are different.
*/ 

#include <iostream>

namespace first {
    int x = 1; //different versions of the same variable which do not result in an error due to being in a different namespace.
}

namespace second {
    int x = 2;
}

int main() {
    using namespace first;

    std::cout << x << '\n';
    std::cout << second::x << '\n';

    //

    using std::cout;
    using std::string;

    //using namespace std is bad because there is a high likelyhood of a naming conflict.

    string name = "Yoonjae Choi";

    cout << "Hello " << name;


    return 0;
}


