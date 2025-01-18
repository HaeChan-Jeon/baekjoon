#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
    std::ios_base::sync_with_stdio(false);

    std::cin.tie(nullptr);

    int32_t n;

    std::cin >> n;

    std::vector<std::pair<int32_t, int32_t>> points(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::cin >> points[i].first >> points[i].second;
    }

    std::sort(points.begin(), points.end());

    for (const auto& point : points)
    {
        std::cout << point.first << " " << point.second << "\n";
    }

    return 0;
}
