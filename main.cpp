#include <iostream>

int main() {
    int num;
    std::cin >> num;
    int sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
