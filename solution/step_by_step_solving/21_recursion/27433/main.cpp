#include <iostream>
#include <cstdint>

uint64_t factorial(uint16_t n) {
    uint64_t result;

    if (n == 0)
    {
        return 1;
    }

    result = n * factorial(n - 1);

    return result;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint16_t n;

    std::cin >> n;

    std::cout << factorial(n);

    return 0;
}