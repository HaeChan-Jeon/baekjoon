#include <iostream>
#include <vector>
#include <numeric>
#include <cstdint>

int main() {
    int32_t n;

    std::cin >> n;

    std::vector<int32_t> trees(n);

    for (int32_t i = 0; i < n; ++i) {
        std::cin >> trees[i];
    }

    std::vector<int32_t> gaps(n - 1);

    for (int32_t i = 0; i < n - 1; ++i) {
        gaps[i] = trees[i + 1] - trees[i];
    }

    int32_t gcd = gaps[0];

    for (int32_t i = 1; i < n - 1; ++i) {
        gcd = std::gcd(gcd, gaps[i]);
    }

    int32_t additionalTrees = 0;

    for (const auto& gap : gaps) {
        additionalTrees += (gap / gcd) - 1;
    }

    std::cout << additionalTrees << std::endl;

    return 0;
}
