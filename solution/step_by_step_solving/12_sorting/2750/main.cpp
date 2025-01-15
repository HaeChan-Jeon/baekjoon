#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main() {
    uint16_t n;

    std::cin >> n;

    std::vector<int32_t> vec(n);

    for (int32_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());

    for (int32_t i = 0; i < n; i++)
    {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}