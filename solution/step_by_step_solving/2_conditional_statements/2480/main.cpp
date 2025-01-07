#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a == b && a == c && b == c) {
        std::cout << 10000 + a * 1000 << std::endl;

        return 0;
    }

    if (a == b || a == c) {
        std::cout << 1000 + a * 100 << std::endl;

        return 0;
    }

    if (b == c) {
        std::cout << 1000 + b * 100 << std::endl;

        return 0;
    }

    if (a > b && a > c) {
        std::cout << a * 100 << std::endl;

        return 0;
    }

    if (b > a && b > c) {
        std::cout << b * 100 << std::endl;

        return 0;
    }

    if (c > a && c > b) {
        std::cout << c * 100 << std::endl;

        return 0;
    }

    return 0;
}