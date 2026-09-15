#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int x;
    while (std::cin >> x) {
        v.push_back(x);
    }
    int max = v[0];
    for (const int& i : v) {
        if (i > max) {
            max = i;
        }
    }
    std::cout << max << std::endl;
    return 0;
}
