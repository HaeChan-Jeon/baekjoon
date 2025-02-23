#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

int16_t n, m;

void backtracking(std::vector<bool>& vec, int16_t count = 0, std::string outputStr = "") {
    if (count == m)
    {
        std::cout << outputStr << "\n";
        return;
    }

    for (int16_t i = 0; i < n; ++i) {
        if (!vec[i])
        {
            vec[i] = true;
            backtracking(vec, count + 1, outputStr + std::to_string(i + 1) + " ");
            vec[i] = false;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> n >> m;
    std::vector<bool> vec(n, false);

    backtracking(vec);

    return 0;
}
