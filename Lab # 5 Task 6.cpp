#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() {
        return 0;
    }
};

class PermanentEmployee : public Employee {
private:
    double BasicSalary;
    double Bonus;
public:
    PermanentEmployee(double bSalary, double b) {
        BasicSalary = bSalary;
        Bonus = b;
    }
    double calculateSalary() {
        return BasicSalary + Bonus;
    }
};

class ContractEmployee : public Employee {
private:
    double HourlyRate;
    int HoursWorked;
public:
    ContractEmployee(double rate, int hours) {
        HourlyRate = rate;
        HoursWorked = hours;
    }
    double calculateSalary() {
        return HourlyRate * HoursWorked;
    }
};

int main() {
    PermanentEmployee pEmp(50000, 10000);
    ContractEmployee cEmp(500, 80);

    cout << pEmp.calculateSalary() << endl;
    cout << cEmp.calculateSalary() << endl;
}