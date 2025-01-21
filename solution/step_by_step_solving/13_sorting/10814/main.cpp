#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

bool costomSort(const std::pair<int32_t, std::string>& a, const std::pair<int32_t, std::string>& b) {
    return a.first < b.first;
}

int main() {
    int32_t n;

    std::cin >> n;

    std::vector<std::pair<int32_t, std::string>> mans(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::cin >> mans[i].first >> mans[i].second;
    }

    std::stable_sort(mans.begin(), mans.end(), costomSort);

    for (const auto& man : mans)
    {
        std::cout << man.first << " " << man.second << std::endl;
    }

    return 0;
}