#include <iostream>
#include <cstdint>
#include <string>

int16_t n, m;

void backtracking(int16_t start = 0, int16_t count = 0, std::string outputStr = "") {
    if (count == m)
    {
        std::cout << outputStr << "\n";
        return;
    }
    
    for (int16_t i = start; i < n; ++i) {
        backtracking(i, count + 1, outputStr + std::to_string(i + 1) + " ");
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> n >> m;

    backtracking();

    return 0;
}
