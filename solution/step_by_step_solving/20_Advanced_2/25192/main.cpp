#include <iostream>
#include <cstdint>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;
    
    std::cin >> n;

    std::unordered_set<std::string> users;

    int32_t count = 0;

    for (int32_t i = 0; i < n; ++i) {
        std::string input;

        std::cin >> input;

        if (input == "ENTER")
        {
            users.clear();
        }
        else if (users.find(input) == users.end())
        {
            users.insert(input);
            count++;
        }
    }

    std::cout << count;

    return 0;
}
