#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual void display() const = 0; 
};


class Circle : public Shape {
protected:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const {
        return M_PI * radius * radius;
    }
    void display() const override {
        cout << "Circle area: " << area() << endl;
    }
};


class Rectangle : public Shape {
protected:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const {
        return length * width;
    }
    void display() const override {
        cout << "Rectangle area: " << area() << endl;
    }
};


class Cylinder : public Circle {
protected:
    double height;
public:
    Cylinder(double r, double h) : Circle(r), height(h) {}
    double volume() const {
        return area() * height; 
    }
    void display() const override {
        cout << "Cylinder volume: " << volume() << endl;
    }
};

int main() {
    Circle circle(5.0);
    circle.display();

    Rectangle rectangle(4.0, 6.0);
    rectangle.display();

    Cylinder cylinder(3.0, 7.0);
    cylinder.display();

    return 0;
}

