#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;

    std::cin >> s;

    std::unordered_set<std::string> result;

    for (int32_t start = 0; start < s.size(); ++start)
    {
        std::string subStr;

        for (int32_t end = start; end < s.size(); ++end)
        {
            subStr += s[end];

            result.insert(subStr);
        }
    }

    std::cout << result.size();

    return 0;
}
