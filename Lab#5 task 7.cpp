#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Base class Student Constructor called" << endl;
    }
};

class GraduateStudent : public Student {
public:
    GraduateStudent() {
        cout << "Derived class GraduateStudent Constructor called" << endl;
    }
};

int main() {
    GraduateStudent gradStudent;
}