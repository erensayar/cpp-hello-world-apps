#include <iostream>
#include "Employee.cpp"

using namespace ::std;

class Developer:public Employee {

private:
    string programmingLanguage;

public:
    Developer(){
    }
    
    Developer(string name, string surname, int age, string programmingLanguage):Employee(name, surname, age) {
        this->programmingLanguage = programmingLanguage;
    }

    string getProgrammingLanguage() {
        return this->programmingLanguage;
    }

    void setProgrammingLanguage(string programmingLanguage) {
        this->programmingLanguage = programmingLanguage;
    }

    void toString() {
        Employee::toString();
        cout << this->programmingLanguage;
    }

};