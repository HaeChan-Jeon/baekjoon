#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main() {
    int32_t n, m;

    std::cin >> n;

    std::vector<int32_t> n_numbers(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::cin >> n_numbers[i];
    }

    std::sort(n_numbers.begin(), n_numbers.end());

    std::cin >> m;

    std::vector<int32_t> m_numbers(m);

    for (int32_t i = 0; i < m; ++i)
    {
        std::cin >> m_numbers[i];
    }

    for (int32_t i = 0; i < m; ++i)
    {
        if (std::binary_search(n_numbers.begin(), n_numbers.end(), m_numbers[i]))
        {
            std::cout << "1 ";
        }
        else
        {
            std::cout << "0 ";
        }
    }

    return 0;
}
