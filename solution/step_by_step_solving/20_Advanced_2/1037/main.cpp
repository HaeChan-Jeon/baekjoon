#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int64_t count;
    std::cin >> count;

    int32_t result;

    if (count == 1)
    {
        std::cin >> result;

        std::cout << static_cast<int64_t>(pow(result, 2));
    }
    else
    {
        std::vector<int32_t> divisor(count);

        for (int32_t i = 0; i < count; ++i)
        {
            std::cin >> divisor[i];
        }

        std::sort(divisor.begin(), divisor.end());

        result = divisor[0] * divisor[count - 1];

        std::cout << result;
    }

    return 0;
}