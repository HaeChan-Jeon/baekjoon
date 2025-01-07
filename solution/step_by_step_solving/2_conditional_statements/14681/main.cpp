#include <iostream>

int main() {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    if (a > 0 && b > 0)
    {
        std::cout << "1" << std::endl;

        return 0;
    }

    if (a < 0 && b > 0)
    {
        std::cout << "2" << std::endl;

        return 0;
    }

    if (a < 0 && b < 0)
    {
        std::cout << "3" << std::endl;

        return 0;
    }

    std::cout << "4" << std::endl;

    return 0;
}