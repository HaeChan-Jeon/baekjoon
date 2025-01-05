#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    int N;

    std::cin >> N;

    std::vector<int> number(N);

    for (size_t i = 0; i < N; i++)
    {
        std::cin >> number[i];
    }

    std::sort(number.begin(), number.end());

    std::cout << std::to_string(number[0]) + " " + std::to_string(number[N - 1]);

    return 0;
}