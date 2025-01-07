#include <iostream>
#include <vector>
#include <string>

int main() {
    int n = 0;
    int m = 0;

    std::cin >> n >> m;

    std::vector<int> result(n);

    for (size_t i = 0; i < n; i++)
    {
        result[i] = i + 1;
    }

    int j = 0;
    int k = 0;
    int l = 0;

    for (size_t i = 0; i < m; i++)
    {
        std::cin >> j >> k;

        l = result[j - 1];
        result[j - 1] = result[k - 1];
        result[k - 1] = l;
    }

    int first = 1;


    for (size_t i = 0; i < n; i++)
    {
        if (first == 1)
        {
            std::cout << result[i];

            first = 0;
        }
        else
        {
            std::cout << " " + std::to_string(result[i]);
        }
    }
    std::cout << std::endl;

    return 0;
}