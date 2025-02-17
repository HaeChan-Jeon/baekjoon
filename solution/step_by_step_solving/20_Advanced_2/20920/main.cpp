#include <iostream>
#include <cstdint>
#include <unordered_map>
#include <vector>
#include <algorithm>

std::unordered_map<std::string, int32_t> count;

bool customSort(const std::string &a, const std::string &b) {
    if (count[a] != count[b])
    {
        return count[a] > count[b];
    }

    if (a.length() != b.length())
    {
        return a.length() > b.length();
    }

    return a < b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n, m;
    std::cin >> n >> m;

    std::vector<std::string> words;

    for (int32_t i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;

        if (word.length() >= m)
        {
            count[word]++;
        }
    }

    for (const auto &word : count) {
        words.push_back(word.first);
    }

    sort(words.begin(), words.end(), customSort);

    for (const std::string &word : words) {
        std::cout << word << '\n';
    }

    return 0;
}