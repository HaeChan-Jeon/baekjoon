#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main() {
    int32_t n, k;

    std::cin >> n >> k;

    std::vector<int32_t> vec(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end(), std::greater<int32_t>());

    std::cout << vec[k - 1];

    return 0;
}