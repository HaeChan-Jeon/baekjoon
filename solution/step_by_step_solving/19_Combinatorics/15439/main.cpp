#include <iostream>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint16_t n;

    std::cin >> n;

    std::cout << n * (n-1) << std::endl;

    return 0;
}