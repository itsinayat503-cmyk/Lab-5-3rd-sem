#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string Brand;
    string Model;
public:
    void setBrand(string b) {
        Brand = b;
    }
    void setModel(string m) {
        Model = m;
    }
    string getBrand() {
        return Brand;
    }
    string getModel() {
        return Model;
    }
};
class Car : public Vehicle {
private:
    int NumberOfDoors;
public:
    void setNumberOfDoors(int d) {
        NumberOfDoors = d;
    }
    int getNumberOfDoors() {
        return NumberOfDoors;
    }
    void displayCar() {
        cout << "Brand: " << Brand << endl;
        cout << "Model: " << Model << endl;
        cout << "Number of Doors: " << NumberOfDoors << endl;
    }
};
int main() {
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setNumberOfDoors(4);

    car.displayCar();
}