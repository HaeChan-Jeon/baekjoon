#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int32_t gcd(int32_t a, int32_t b) {
    while (b != 0)
    {
        int32_t temp = b;

        b = a % b;
        a = temp;
    }

    return a;
}

int32_t lcm(int32_t a, int32_t b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t t;
    std::cin >> t;

    std::vector<std::pair<int32_t, int32_t>> numbers(t);
    std::vector<int32_t> results;

    for (int32_t i = 0; i < t; ++i)
    {
        std::cin >> numbers[i].first >> numbers[i].second;

        results.push_back(lcm(numbers[i].first, numbers[i].second));
    }

    for (const auto& result : results)
    {
        std::cout << result << "\n";
    }

    return 0;
}
