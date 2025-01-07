#include <iostream>

int main() {
    int a, b;

    std::cin >> a;

    b = a;

    for (size_t i = 0; i < a; i++)
    {
        for (size_t k = b; k > 1; k--)
        {
            std::cout << " ";
        }

        for (size_t j = 0; j < (i + 1); j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";

        b--;
    }

    return 0;
}