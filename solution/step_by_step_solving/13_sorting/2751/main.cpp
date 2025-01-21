#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);

    std::cin.tie(nullptr);

    uint32_t n;

    std::cin >> n;

    std::vector<int32_t> vec(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());

    for (int32_t i = 0; i < n; ++i)
    {
        std::cout << vec[i] << "\n";
    }

    return 0;
}