#include <iostream>

int square(int n) {
    return n * n;
}

int main() {
    int n;
    std::cin >> n;
    n = square(n);
    std::cout << n;
    return 0;
}
