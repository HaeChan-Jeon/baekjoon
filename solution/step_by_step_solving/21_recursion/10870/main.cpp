#include <iostream>
#include <cstdint>

uint16_t fibonacci(uint16_t n) {
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint16_t n;

    std::cin >> n;

    std:: cout << fibonacci(n);

    return 0;
}