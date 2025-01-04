#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a;

    for (size_t i = 0; i < a; i++)
    {
        std::cin >> b >> c;

        std::cout << b + c << std::endl;
    }

    return 0;
}