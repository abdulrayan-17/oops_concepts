#include <iostream>
using std::string;

class Employee {
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee emp1= Employee("Abdul", "IT", 20);
    emp1.IntroduceYourself();
    Employee emp2= Employee("Rayan", "Business", 20);
    emp2.IntroduceYourself();
    
    /*Employee emp1, emp2;
    
    emp1.Name = "Abdul";
    emp1.Company = "IT";
    emp1.Age = 20;
    emp1.IntroduceYourself();
    
    emp2.Name = "Rayan";
    emp2.Company = "Business";
    emp2.Age = 20;
    emp2.IntroduceYourself();*/
}