#include <iostream>

int main() {
    int a, b;

    std::cin >> a;

    b = 0;

    for (size_t i = 0; i < a; i++)
    {
        b = b + i + 1; 
    }

    std::cout << b << std::endl;

    return 0;
}