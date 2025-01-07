#include <iostream>

int main() {
    int a;

    std::cin >> a;

    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < (i + 1); j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}