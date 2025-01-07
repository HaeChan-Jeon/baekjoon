#pragma GCC diagnostic ignored "-Wunused-result"

#include <iostream>
#include <vector>

int main() {
    std::vector<int> input(6);

    for (size_t i = 0; i < 6; i++)
    {
        std::cin >> input[i];
    }

    std::vector<int> result = {1, 1, 2, 2, 2, 8};

    for (size_t i = 0; i < 6; i++)
    {
        result[i] -= input[i];
    }

    for (int num : result)
    {
        std::cout << num << " ";
    }

    return 0;
}