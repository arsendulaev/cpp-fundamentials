#include <iostream>
#include <iomanip>

template <typename T>
T sumPair(T a, T b) {
    return a + b;
};

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << sumPair(a, b) << std::endl;
    double c, d;
    std::cin >> c >> d;
    std::cout << std::fixed << std::setprecision(2) << sumPair(c, d) << std::endl;
    return 0;
}
