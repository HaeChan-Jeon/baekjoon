#include <iostream>

int main() {
    int a, b;

    while (std::cin >> a >> b)
    {
        if (a == 0 && b == 0)
        {
            return 0;
        }
        else if (b / a != 0 && b % a == 0)
        {
           std::cout << "factor" << std::endl;
        }
        else if (a / b != 0 && a % b == 0)
        {
           std::cout << "multiple" << std::endl;
        }
        else
        {
           std::cout << "neither" << std::endl;
        }
    }
    
    return 0;
}