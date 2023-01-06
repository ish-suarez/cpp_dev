#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;

        // Constructor Defined inside class for OUTSIDE declaration 
        Car(string x, string y, int z);

        void honk(){
            cout << "TUUUUT" << "\n";
        }
        // Constructor INSIDE the class
        // Car( string x, string y, int z ){
        //     brand = x;
        //     model = y;
        //     year = z;
        // }
    private:
        int a;
};

// Constructor OUTSIDE the class
Car::Car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
}




int main(){


    Car bmw("BMW", "X5", 1999);
    Car ford("Ford", "Mustang", 1969);
    bmw.honk(); // Inheritance
    cout << bmw.brand << ", " << bmw.model << ", " << bmw.year << "\n";
    cout << ford.brand << ", " << ford.model << ", " << ford.year << "\n";

    return 0;
}