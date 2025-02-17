#include <iostream>
#include <cstdint>
#include <vector>

int64_t factorial(int32_t n, int32_t k) {
    std::vector<int64_t> factorial_vec(n + 1, 1);

    int64_t result;

    for (int32_t i = 1; i <= n; ++i) {
        int64_t value = 1;

        for (int32_t j = 2; j <= i; ++j)
        {
            value *= j;
        }

        factorial_vec[i] = value;
    }

    result = factorial_vec[n] / (factorial_vec[k] * factorial_vec[n - k]);

    return result;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n, k;

    std::cin >> n >> k;

    int64_t result = factorial(n, k);

    std::cout << result << std::endl;

    return 0;
}