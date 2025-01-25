#include <iostream>
#include <cmath>
#include <cstdint>

uint64_t countWindows(uint64_t n) {
    return static_cast<uint64_t>(std::sqrt(n));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint64_t n;

    std::cin >> n;

    std::cout << countWindows(n);

    return 0;
}
