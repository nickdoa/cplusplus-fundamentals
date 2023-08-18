#include <iostream>

int main() {
    //           rows  columns
    std::string cars[][3] = {{"Boxter", "Cayman", "Spyder"},
                            {"Monza", "Roma", "Tributo"},
                            {"Huarya", "Zonda", "Utopia"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    /*
    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << '\n';
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << '\n';
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << '\n';
    */

    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}