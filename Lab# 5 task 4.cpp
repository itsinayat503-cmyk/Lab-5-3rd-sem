#include <iostream>
using namespace std;
class Shape {
public:
   double calculateArea() {
        return 0;
    }
};
class Circle : public Shape {
private:
    double Radius;
public:
    void setRadius(double r) {
        Radius = r;
    }
    double calculateArea() {
        return 3.14159 * Radius * Radius;
    }
};
class Rectangle : public Shape {
private:
    double Length;
    double Width;
public:
    void setLength(double l) {
        Length = l;
    }
    void setWidth(double w) {
        Width = w;
    }
    double calculateArea() {
        return Length * Width;
    }
};

class Triangle : public Shape {
private:
    double Base;
    double Height;
public:
    void setBase(double b) {
        Base = b;
    }
    void setHeight(double h) {
        Height = h;
    }
    double calculateArea() {
        return 0.5 * Base * Height;
    }
};
int main() {
    Circle circle;
    circle.setRadius(5);

    Rectangle rectangle;
    rectangle.setLength(10);
    rectangle.setWidth(4);

    Triangle triangle;
    triangle.setBase(6);
    triangle.setHeight(8);

    cout << circle.calculateArea() << endl;
    cout << rectangle.calculateArea() << endl;
    cout << triangle.calculateArea() << endl;
}