#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << ">" << std::endl;
    }
    
    if (a < b)
    {
        std::cout << "<" << std::endl;
    }

    if (a == b)
    {
        std::cout << "==" << std::endl;
    }

    return 0;
}