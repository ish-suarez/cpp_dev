#include <iostream>
#include <string>
using namespace std;

// Setting Car attribute
class Car {
    public:
        string brand;
        string model;
        int year;

        // Class Methods INSIDE example
        void carMethod(){
            cout << "These are cars " << "\n";
        }

        // Outside method Definition
        void outsideCarMethod();
};

void Car::outsideCarMethod() {
    cout << "Outside Car Method " << "\n";
}

int main(){
    Car myObj;

    // One object of car
    Car bmw;
    bmw.brand = "BMW";
    bmw.model = "X5";
    bmw.year = 2006;

    // Another object of car
    Car ford;
    ford.brand = "Ford";
    ford.model = "Escape";
    ford.year = 2021;

    // Printing The Values
    cout << bmw.brand << ", " << bmw.model << ", " << bmw.year << "\n";
    cout << ford.brand << ", " << ford.model << ", " << ford.year << "\n";

    myObj.carMethod(); // Calls Car Method INSIDE class
    myObj.outsideCarMethod(); // Calls Method Defined OUTSIDE of class

    return 0;
}