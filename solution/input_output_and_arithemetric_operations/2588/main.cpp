#include <iostream>
#include <string>

int main() {
    std::string a, b;

    std::cin >> a;
    std::cin >> b;

    int i = std::stoi(a) * (b[2] - '0');
    int j = std::stoi(a) * (b[1] - '0');
    int k = std::stoi(a) * (b[0] - '0');
    int l = i + j * 10 + k * 100;

    std::cout << i << std::endl;
    std::cout << j << std::endl;
    std::cout << k << std::endl;
    std::cout << l << std::endl;

    return 0;
}