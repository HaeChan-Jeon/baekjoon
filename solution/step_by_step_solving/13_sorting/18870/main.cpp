#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    int32_t n;

    std::cin >> n;

    std::vector<int32_t> vec(n);

    for (int32_t i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    std::vector<int32_t> sorted_vec = vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());
    sorted_vec.erase(std::unique(sorted_vec.begin(), sorted_vec.end()), sorted_vec.end());

    std::unordered_map<int32_t, int32_t> compression_map;

    for (int32_t i = 0; i < sorted_vec.size(); ++i)
    {
        compression_map[sorted_vec[i]] = i;
    }

    for (int32_t i = 0; i < n; ++i)
    {
        std::cout << compression_map[vec[i]] << " ";
    }

    return 0;
}
