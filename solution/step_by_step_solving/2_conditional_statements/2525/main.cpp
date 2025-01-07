#include <iostream>
#include <string>

int main() {
    int a, b, c;

    std::cin >> a >> b;
    std::cin >> c;

    b = b + c;

    a = a + (b / 60);

    b = b % 60;

    if (a == 24) {
        a = 0;
    }

    if (a > 24) {
        a = a % 24;
    }

    std::cout << std::to_string(a) + " " + std::to_string(b) << std::endl;

    return 0;
}