#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string Name;
    int Age;
public:
    void setName(string n) {
        Name = n;
    }
    void setAge(int a) {
        Age = a;
    }
    string getName() {
        return Name;
    }
    int getAge() {
        return Age;
    }
};
class Student : public Person {
private:
    int RollNo;
    double Marks;
public:
    void setRollNo(int r) {
        RollNo = r;
    }
    void setMarks(double m) {
        Marks = m;
    }
    int getRollNo() {
        return RollNo;
    }
    double getMarks() {
        return Marks;
    }
    void displayStudent() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Marks: " << Marks << endl;
    }
};

int main() {
    Student student;
    student.setName("inayat");
    student.setAge(20);
    student.setRollNo(70186044);
    student.setMarks(100);

    student.displayStudent();
}
