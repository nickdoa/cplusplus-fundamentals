#include <iostream>

class stove{
    private: // in public, i can take the attributes and change them
        int temperature = 0; // by using private, we follow the rule of abstraction
        // hiding any unnecessary data from a user that they don't need.
    public: // remember, public and private are called access modifiers.
    stove(int temperature){ // if you have a constructor, you can invoke setters within a constructor
        setTemperature(temperature);
    }
    int getTemperature(){ // this is called a getter. you can no longer get the temperature
        // readable, but not writeable. adding a getter will make an attribute readable
        return temperature;
    }
    void setTemperature(int temperature){ // this is a setter. you can modify the private attribute temperature
        
        // within a getter or setter, you can perform additional checks or logic

        if(temperature < 0){ // check if entered temp is less than 0
            this->temperature = 0; // if yes, set temp to 0
        }
        else if (temperature >= 10){ // check is temp is greater than or equal to 10
            this-> temperature = 10; // if so cap entered temperature at 10
        }
        else { // otherwise
            this-> temperature = temperature; // set temp to user's input
        }
    }
};

int main() {

    // abstraction = hiding unnecessary data from outside a class
    // getter = function that makes private attributes READABLE
    // setter = function that makes private attributes WRITEABLE

    stove stove1(5);

    std::cout << "The temperature setting is: " << stove1.getTemperature() << '\n';

    return 0;
}