#include <iostream>
#include <string>

int main() {
    int a;

    std::cin >> a;

    for (size_t i = 0; i < 9; i++)
    {
        std::cout << std::to_string(a) + " * " + std::to_string(i + 1) + " = " + std::to_string(a * (i + 1)) << std::endl;
    }

    return 0;
}