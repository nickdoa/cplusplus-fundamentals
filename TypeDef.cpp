/* typedef = reserved keyword used to create an addition name (alias/nickname)
    for another data type. New identifier for an EXISTING data type.
    Helps with readability and reduces typos.
*/

#include <iostream> 
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t //ends with _t to identify as typedef

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main()  {

    text_t name = "Yoonjae Choi";
    std::cout << name << '\n';

    number_t age = 16;
    std::cout << age << '\n';

    return 0;
}

//typedef has been largely replaced with 'using' (work better w/ templates) idk what that is yet