#include <iostream>
#include "./model/Employee.cpp"
#include "./model/Developer.cpp"

using namespace::std;

int main(int argc, char const *argv[]) {
    
    Employee employee1 = Employee();
    employee1.setAge(26);
    employee1.setName("Eren");
    employee1.setSurname("Elessar");
    employee1.toString();
    employee1.promotionRequest();
    cout << endl;

    Employee employee2 = Employee("John", "Smith", 35);
    employee2.toString();
    employee2.promotionRequest();
    cout << endl;

    Developer developer1 = Developer("Jonathan", "Cornelius", 26, "Java");
    developer1.toString();
    developer1.promotionRequest();
    cout << endl;

    return 0;
}
