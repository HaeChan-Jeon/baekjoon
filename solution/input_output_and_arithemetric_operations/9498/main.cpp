#include <iostream>

int main() {
    int a;

    std::cin >> a;

    if (90 <= a && 100 >= a) {
        std::cout << "A" << std::endl;
    }

    if (80 <= a && 89 >= a) {
        std::cout << "B" << std::endl;
    }

    if (70 <= a && 79 >= a) {
        std::cout << "C" << std::endl;
    }

    if (60 <= a && 69 >= a) {
        std::cout << "D" << std::endl;
    }

    if (59 >= a) {
        std::cout << "F" << std::endl;
    }

    return 0;
}