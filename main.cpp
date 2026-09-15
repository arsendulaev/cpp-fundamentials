#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v;
    int n;
    while (std::cin >> n) {
        v.push_back(n);
    }
    int ans = std::accumulate(v.begin(), v.end(), 0, [](int sum, int n) { return n % 2 == 0 ? sum + n * n : sum; });
    std::cout << ans << std::endl;
    return 0;
}
