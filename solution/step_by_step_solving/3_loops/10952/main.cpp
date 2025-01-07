#include <iostream>

int main() {
    int b, c;

    while (true)
    {
        std::cin >> b >> c;

        if (b == 0 && c == 0)
        {
            return 0;
        }

        std::cout << (b + c) << std::endl;
    }
    
    return 0;
}