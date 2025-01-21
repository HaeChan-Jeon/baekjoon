#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int64_t n, m;

    std::cin >> n;

    std::unordered_map<int64_t, int64_t> data;

    for (int64_t i = 0; i < n; ++i)
    {
        int64_t key;

        std::cin >> key;

        data[key]++;
    }

    std::cin >> m;

    std::vector<int64_t> results(m);

    for (int64_t i = 0; i < m; ++i)
    {
        int64_t query;

        std::cin >> query;

        results[i] = data[query];
    }

    for (const auto& result : results)
    {
        std::cout << result << " ";
    }

    return 0;
}
