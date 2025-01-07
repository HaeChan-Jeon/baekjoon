#include <iostream>
#include <vector>
#include <string>

int main() {
    int N, X;
    std::string result = "";

    std::cin >> N >> X;

    std::vector<int> number(N);

    for (size_t i = 0; i < N; ++i) {
        std::cin >> number[i];
    }

    bool first = true;

    for (size_t i = 0; i < N; i++) {
        if (number[i] < X) {
            if (first) {
                result += std::to_string(number[i]);
                first = false;
            } else {
                result += " " + std::to_string(number[i]);
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}
