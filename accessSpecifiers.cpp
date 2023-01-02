#include <iostream>
using namespace std;

class ExampleClass{
    // Automatically Declared private access specifier
    int x;
    int y;
    // public:     // Public access specifier
    //     int x;
    // private:    // Private access specifier
    //     int y;
};

int main(){
    ExampleClass example;
    example.x = 90; // Allowed Access
    example.y = 40; // Cannot be accessed
    
    return 0;
}