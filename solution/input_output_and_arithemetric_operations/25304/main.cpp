#include <iostream>

int main() {
    int a, b, c, d, e;

    std::cin >> a;
    std::cin >> b;

    e = 0;

    for (size_t i = 0; i < b; i++)
    {
        std::cin >> c >> d;

        e = e + c * d;
    }

    if (a == e)
    {
        std::cout << "Yes" << std::endl;

        return 0;
    }
    
    std::cout << "No" << std::endl;

    return 0;
}