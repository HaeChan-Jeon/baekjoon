#include <iostream>

int main() {
    int a;
    std::string b;

    std::cin >> a;
    std::cin >> b;

    int result = 0;

    for (size_t i = 0; i < a; i++)
    {
        result += static_cast<int>(b[i]) - '0';
    }

    std::cout << result << std::endl;

    return 0;
}