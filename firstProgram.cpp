#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 1. Print out a "Greetings!" message
void myGreeting(){
  cout << "Hello World!" << "\n";
  cout << "I am learning C++" << "\n";
}

void standardStringWithoutImporting(){
  std::string greeting = "Hello Mom!";
  std::cout << greeting << "\n";
}

void getFirstNameInput() {
  string fullName;
  cout << "Type your name: ";
  getline(cin, fullName);
  cout << "Your name is: " << fullName << endl;
}

void roundTheSquareRoot(){
  cout << round(sqrt(9)) << "\n";
}

void playingWithArrays(){
  string gamingSystem[] = {"Xbox", "Playstation", "PC"};

  int system = sizeof(gamingSystem) / sizeof(string);
  for (int i = 0; i < system; i++){
    cout << gamingSystem[i] << "\n";
  }
}

void multiDimensionalArray(){
  string letters[2][4] = {
      { "A", "B", "C", "D" },
      { "E", "F", "G", "H" }
    };

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++){
      cout << letters[i][j] << "\n";
    }
  }
}
// Function
void addTwoNumbers(int x, int y){
  cout << x + y << endl;
}

int main() {

  // My Greeting
  myGreeting();

  // Without importing string
  standardStringWithoutImporting();

  // Using Math library
  roundTheSquareRoot();

  // Playing with Arrays and returning values in it
  playingWithArrays();

  // Multi Dimensional Array
  multiDimensionalArray();

  // Get Input from user
  getFirstNameInput();

  // Function overloading
  addTwoNumbers(2, 4);
  addTwoNumbers(3, 12);

  return 0;
}