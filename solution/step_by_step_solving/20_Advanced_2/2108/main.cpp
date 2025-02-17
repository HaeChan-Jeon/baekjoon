#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <cstdint>

bool customSort(const std::pair<int32_t, int32_t>& a, const std::pair<int32_t, int32_t>& b) {
    if (a.second != b.second)
    {
        return a.second > b.second;
    }

    return a.first < b.first;
}

int32_t calculateMean(int32_t sum, int32_t n) {
    return static_cast<int32_t>(std::round(sum / static_cast<double>(n)));
}

int32_t calculateMedian(std::vector<int> &numbers, int32_t n) {
    std::sort(numbers.begin(), numbers.end());
    return numbers[n / 2];
}

int32_t calculateMode(const std::unordered_map<int32_t, int32_t> &frequency) {
    std::vector<std::pair<int32_t, int32_t>> vec(frequency.begin(), frequency.end());

    std::sort(vec.begin(), vec.end(), customSort);

    if (vec.size() > 1 && vec[0].second == vec[1].second)
    {
        return vec[1].first;
    }

    return vec[0].first;
}

int32_t calculateRange(const std::vector<int32_t> &numbers) {
    return numbers.back() - numbers.front();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;
    std::cin >> n;

    std::vector<int32_t> numbers(n);
    std::unordered_map<int32_t, int32_t> frequency;

    int32_t sum = 0;

    for (int32_t i = 0; i < n; i++) {
        std::cin >> numbers[i];

        sum += numbers[i];
        frequency[numbers[i]]++;
    }

    std::sort(numbers.begin(), numbers.end());

    std::cout << calculateMean(sum, n) << '\n';
    std::cout << calculateMedian(numbers, n) << '\n';
    std::cout << calculateMode(frequency) << '\n';
    std::cout << calculateRange(numbers) << '\n';

    return 0;
}
