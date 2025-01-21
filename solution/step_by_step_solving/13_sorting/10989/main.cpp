#include <iostream>
#include <vector>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);

    std::cin.tie(nullptr);

    uint32_t n;
    
    std::cin >> n;

    std::vector<uint32_t> count(10000, 0);

    for (uint32_t i = 0; i < n; ++i)
    {
        uint16_t number;

        std::cin >> number;

        count[number - 1]++;
    }

    for (uint16_t i = 1; i <= 10000; ++i)
    {
        for (uint32_t j = 0; j < count[i - 1]; ++j)
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}