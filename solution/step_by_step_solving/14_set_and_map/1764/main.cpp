#include <iostream>
#include <cstdint>
#include <set>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n, m;

    std::cin >> n >> m;

    std::unordered_set<std::string> data(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::string name;

        std::cin >> name;

        data.insert(name);
    }

    int count = 0;

    std::set<std::string> results;

    for (int32_t i = 0; i < m; ++i)
    {
        std::string name;

        std::cin >> name;

        if (data.find(name) != data.end())
        {
            results.insert(name);

            count++;
        }
    }

    std::cout << count << "\n";

    for (const auto& result : results)
    {
        std::cout << result << "\n";
    }

    return 0;
}