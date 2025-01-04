#include <iostream>
#include <string>

int main() {
    int a, b;

    std::cin >> a >> b;

    if (b >= 45) {
        std::cout << std::to_string(a) + " " + std::to_string(b - 45) << std::endl;
    }

    if (b < 45) {
        if (a != 0) {
            std::cout << std::to_string(a - 1) + " " + std::to_string(60 + (b - 45)) << std::endl;

            return 0;
        }

        std::cout << "23 " + std::to_string(60 + (b - 45)) << std::endl;
    }

    return 0;
}