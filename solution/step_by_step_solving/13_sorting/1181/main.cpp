#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdint>

bool customSort(const std::string& a, const std::string& b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

int main() {
    int32_t n;

    std::cin >> n;

    std::vector<std::string> vec(n);

    for (int32_t i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end(), customSort);

    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    for (const auto& str : vec)
    {
        std::cout << str << std::endl;
    }

    return 0;
}
