#include <iostream>
#include "EmployeeAbstract.hpp"

using namespace ::std;


class Employee:EmployeeAbstract {

private:
    string name;
    string surname;
    int age;

public: 
    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getSurname() {
        return this->surname;
    }

    void setSurname(string surname) {
        this->surname = surname;
    }

    int getAge() {
        return this->age;
    }

    void setAge(int age) {
        this->age = age;
    }

    Employee(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    Employee() {
    }

   void toString() {
        cout << "Name: " << this->name << endl;
        cout << "Surname: " << this->surname << endl;
        cout << "Age: " << this->age << endl;
    }

    void promotionRequest() {
        if(this-> age >= 30) {
            cout << "Yes employee can get promotion";
        } 
        cout << "No promotion";
    }

};