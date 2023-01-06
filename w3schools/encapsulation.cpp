#include <iostream>
using namespace std;

class Employee {
    private:
        int salary;
    public:
        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main(){
    Employee employeeObj;
    employeeObj.setSalary(50000);
    cout << employeeObj.getSalary() << endl;

    return 0;
}