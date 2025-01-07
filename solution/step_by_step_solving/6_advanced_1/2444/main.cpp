#include <iostream>

int main() {
    int a;

    std::cin >> a;

    int space = a - 1;

    for (int i = 0; i < (a - 1); i++)
    {
        for (int j = 0; j < space; j++)
        {
            std::cout << " ";
        }

        for (int k = 0; k < ((i + 1) * 2 - 1); k++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;

        space--;
    }

    for (int i = 0; i < (a * 2 - 1); i++)
    {
        std::cout << "*";
    }

    std::cout << std::endl;

    space = 1;

    for (int i = 0; i < (a - 1); i++)
    {
        for (int j = 0; j < space; j++)
        {
            std::cout << " ";
        }

        for (int k = 0; k < a * 2 - 3 - (i * 2); k++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;

        space++;
    }

    return 0;
}