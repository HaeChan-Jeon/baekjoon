#include <iostream>
#include <cstdint>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n, m;

    std::cin >> n >> m;

    std::unordered_set<int32_t> a(n);

    for (int32_t i = 0; i < n; ++i)
    {
        int32_t number;

        std::cin >> number;

        a.insert(number);
    }
    
    std::unordered_set<int32_t> b(m);

    for (int32_t i = 0; i < m; ++i)
    {
        int32_t number;

        std::cin >> number;

        b.insert(number);
    }

    std::unordered_set<int32_t> result;

    for (const auto& element : a)
    {
        if (b.find(element) == b.end())
        {
            result.insert(element);
        }
    }

    for (const auto& element : b)
    {
        if (a.find(element) == a.end())
        {
            result.insert(element);
        }
    }

    std::cout << result.size();

    return 0;
}