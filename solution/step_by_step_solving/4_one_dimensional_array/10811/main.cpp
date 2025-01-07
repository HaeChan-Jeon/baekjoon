#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;

    std::cin >> n >> m;

    std::vector<int> vec(n);

    for (size_t i = 0; i < n; i++)
    {
        vec[i] = (i + 1);
    }

    int j, k;

    for (size_t i = 0; i < m; i++)
    {
        std::cin >> j >> k;

        std::reverse(vec.begin() + j - 1, vec.begin() + k);
    }

    for (int num : vec) {
        std::cout << num << " ";
    }

    return 0;
}