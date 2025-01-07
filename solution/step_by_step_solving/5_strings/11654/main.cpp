#include <iostream>

int main() {
    std::string a;

    std::cin >> a;

    std::cout << static_cast<int>(a[0]) << std::endl;

    return 0;
}