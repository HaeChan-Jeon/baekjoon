#include <iostream>
#include <cmath>

int64_t factorial(int n) {
    int64_t result = 1;

    for (int32_t i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;

    std::cin >> n;

    std::cout << factorial(n) << std::endl;

    return 0;
}