#include <iostream>
#include <cstdint>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;
    
    std::cin >> n;

    std::unordered_set<std::string> users;

    users.insert("ChongChong");

    for (int i = 0; i < n; ++i) {
        std::string a, b;
        std::cin >> a >> b;

        if (users.count(a) || users.count(b))
        {
            users.insert(a);
            users.insert(b);
        }
    }

    std::cout << users.size();

    return 0;
}
