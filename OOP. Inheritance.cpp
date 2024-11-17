#include <iostream>
using namespace std;

//class Vehicle {
//private:
//    string brand;
//    string model;
//public:
//    Vehicle(string b, string m) : brand(b), model(m) {}
//    void PrintInfo() {
//        cout << "Brand: " << brand << "Model: " << model << endl;
//    }
//};
//
//class Car : public Vehicle {
//private:
//    int doors;
//public:
//    Car(string b, string m, int d) : Vehicle(b, m), doors(d) {}
//    void PrintInfo() {
//        Vehicle::PrintInfo();
//        cout << "Doors: " << doors << endl;
//    }
//};
//
//class Motorcycle : public Vehicle {
//public:
//    Motorcycle(string b, string m) : Vehicle(b, m) {}
//    void PrintInfo() {
//        Vehicle::PrintInfo();
//    }
//};
//
//int main() {
//    Car car("Toyota", "Corolla", 4);
//    Motorcycle motorcycle("Harley-Davidson", "MUSTER");
//
//    car.PrintInfo();
//    cout << endl;
//    motorcycle.PrintInfo();
//}

//2

//class Shape {
//public:
//    virtual double Area() = 0;
//};
//
//class Circle : public Shape {
//private:
//    double radius;
//public:
//    Circle(double r) : radius(r) {}
//    double Area() override {
//        return 3.14 * radius * radius;
//    }
//};
//
//class Rectangle : public Shape {
//private:
//    double width;
//    double height;
//public:
//    Rectangle(double w, double h) : width(w), height(h) {}
//    double Area() override {
//        return width * height;
//    }
//};
//
//int main() {
//    Circle circle(5.0);
//    Rectangle rectangle(4.0, 6.0);
//
//    cout << "Circle Area: " << circle.Area() << endl;
//    cout << "Rectangle Area: " << rectangle.Area() << endl;
//}

 //3

    //class Employee {
    //private:
    //    string name;
    //    int id;
    //public:
    //    Employee(string n, int i) : name(n), id(i) {}
    //    virtual double CalculateSalary() = 0;
    //    virtual void PrintInfo() {
    //        cout << "Name: " << name << ", ID: " << id << endl;
    //    }
    //};

    //class HourlyEmployee : public Employee {
    //private:
    //    double hourlyRate;
    //    int hoursWorked;
    //public:
    //    HourlyEmployee(string n, int i, double hr, int hw)
    //        : Employee(n, i), hourlyRate(hr), hoursWorked(hw) {}
    //    double CalculateSalary() override {
    //        return hourlyRate * hoursWorked;
    //    }
    //    void PrintInfo() override {
    //        Employee::PrintInfo();
    //        cout << "Salary: " << CalculateSalary() << endl;
    //    }
    //};

    //class SalariedEmployee : public Employee {
    //private:
    //    double annualSalary;
    //public:
    //    SalariedEmployee(string n, int i, double as)
    //        : Employee(n, i), annualSalary(as) {}
    //    double CalculateSalary() override {
    //        return annualSalary;
    //    }
    //    void PrintInfo() override {
    //        Employee::PrintInfo();
    //        cout << "Salary: " << CalculateSalary() << endl;
    //    }
    //};

    //int main() {
    //    HourlyEmployee hourly("John Doe", 1, 20.5, 40);
    //    SalariedEmployee salaried("Jane Smith", 2, 60000);

    //    hourly.PrintInfo();
    //    cout << endl;
    //    salaried.PrintInfo();
    //}

