#include <iostream>
#include <set>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;

    std::cin >> n;

    std::set<std::string, std::greater<>> data;

    for (int32_t i = 0; i < n; ++i)
    {
        std::string name, action;

        std::cin >> name >> action;

        if (action == "enter")
        {
            data.insert(name);
        }
        else if (action == "leave")
        {
            data.erase(name);
        }
    }

    for (const auto& name : data)
    {
        std::cout << name << "\n";
    }

    return 0;
}
