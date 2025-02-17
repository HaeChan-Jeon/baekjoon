#include <iostream>
#include <cstdint>

int64_t binomialCoefficient(int64_t m, int64_t n) {
    int64_t result = 1;

    for (int64_t i = 0; i < n; ++i) {
        result = result * (m - i) / (i + 1);
    }
    
    return result;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int64_t t;
    std::cin >> t;

    while (t--) {
        int64_t n, m;
        std::cin >> n >> m;

        std::cout << binomialCoefficient(m, n) << '\n';
    }

    return 0;
}