#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number --> ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    if (result % 10 == 0) {
        std::cout << cardNumber << " is valid!";
    }
    else {
        std::cout << cardNumber << " is not valid!";
    }
}

int getDigit(const int number) {
    return number % 10 + (number/10 % 10);
}
int sumOddDigits(const std::string cardNumber) {

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += getDigit(cardNumber[i] - '0');
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber) {

    int sum = 0;
    // arrays use sizeof() to calculate size. in this case, we can treat
    // the string cardNumber as an array. to calculate the size, use the 
    // .size function (name of string).size
    
    // we subtract 1 from the size of the string because arrays start with 0
    // however, we are summing the EVEN digits so subtract two instead of one.
    // decrement i by 2 because we need every even or other digit.
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        // why subtract the char 0? we are working with a string
        // we are treating said string like an array of characters
        // each character according to the ascii table has an associated value
        // if i am passing one of these characters as an argument to my getDigit function,
        // we treat that character as if it was its decimal equivalent.
        // the character 0 has a decimal vlaue of 48. 1 has a value of 49, 2 has 50, and so on up to 9, with 57 as its decimal value.
        // when i pass in the character at index i, i actually pass in the decimal value of that character.
        // when i subtract character 0 which is the decimal equivalent of 48
        // note that i can also subtract 48 instead of the character '0'
        // example: the decimal equivalent of the character 7 is 55. When i subtract character 0, or 48, i get 55 - 48
        // this will result in 7.   
        // tldr: the line below converts characters representing digits in a string to their numeric values by subtracting the ASCII value of '0'.
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
