#include <iostream>
#include <vector>
#include <string>

int main() {
    int n, m, j, k, l = 0;

    std::cin >> n >> m;

    std::vector<int> result(n);

    for (size_t i = 0; i < m; i++)
    {
        std::cin >> j >> k >> l;

        for (size_t p = j; p < k + 1; p++)
        {
            result[p - 1] = l;
        }
    }

    int first = 1;

    for (size_t i = 0; i < n; ++i)
    {
        if (first)
        {
            std::cout << std::to_string(result[i]);

            first = 0;
        }
        else
        {
            std::cout << " " + std::to_string(result[i]);
        }
    }

    return 0;
}