#include <iostream>
#include <iomanip>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Square : public Shape {
    double side;
public:
    Square(double _side) : side(_side) {}
    double area() const override {
        return side * side;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double _radius) : radius(_radius)  {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    double side, radius;
    std::cin >> side >> radius;
    Shape* square = new Square(side);
    Shape* circle = new Circle(radius);
    std::cout << std::fixed << std::setprecision(2) <<  square->area() << std::endl;
    std::cout << circle->area() << std::endl;
    delete square;
    delete circle;
    return 0;
}
