#include <iostream>

int main() {
    std::string a;

    std::cin >> a;

    int b;

    std::cin >> b;

    std::cout << a[b - 1] << std::endl;

    return 0;
}