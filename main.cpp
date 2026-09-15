#include <iostream>

class Rectangle {
    int width;
    int height;

public:
    Rectangle(int width, int height) : width(width), height(height) {
    }

    int area() const { return width * height; }
    int perimeter() const { return 2 * (width + height); }
};

int main() {
    int width, height;
    std::cin >> width >> height;
    Rectangle rectangle(width, height);
    std::cout << "area: " << rectangle.area() << std::endl;
    std::cout << "perimeter: " << rectangle.perimeter() << std::endl;
    return 0;
}
