#include <iostream>
#include <unordered_set>
#include <string>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);

    std::cin.tie(nullptr);

    int32_t n, m;

    std::cin >> n >> m;

    std::unordered_set<std::string> test_set;

    for (int32_t i = 0; i < n; ++i)
    {
        std::string str;

        std::cin >> str;

        test_set.insert(str);
    }

    int32_t count = 0;

    for (int32_t i = 0; i < m; ++i)
    {
        std::string str;

        std::cin >> str;

        if (test_set.find(str) != test_set.end())
        {
            ++count;
        }
    }

    std::cout << count;

    return 0;
}
