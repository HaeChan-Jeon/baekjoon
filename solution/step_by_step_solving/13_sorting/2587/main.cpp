#include <iostream>
#include <cstdint>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int32_t> vec(5);

    for (int32_t i = 0; i < 5; i++)
    {
        std::cin >> vec[i];
    }

    int32_t average, median;

    average = std::accumulate(vec.begin(), vec.end(), 0) / 5;

    std::sort(vec.begin(), vec.end());

    median = vec[2];

    std::cout << average << " " << median;

    return 0;
}