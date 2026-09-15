#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> map;
    std::string s;
    while (std::cin >> s) {
        map[s]++;
    }
    std::cout << map.size() << std::endl;
    return 0;
}
