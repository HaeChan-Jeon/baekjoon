#include <iostream>

int main() {
    int t;

    std::cin >> t;

    int coin;

    int a, b, c, d;

    for (size_t i = 0; i < t; i++)
    {
        std::cin >> coin;

        a = coin / 25;

        std::cout << a << " ";
        coin -= 25 * a;

        b = coin / 10;
        std::cout << coin / 10 << " ";
        coin -= 10 * b;

        c = coin / 5;
        std::cout << coin / 5 << " ";
        coin -= 5 * c;

        d = coin / 1;
        std::cout << coin / 1 << std::endl;
    }
    
    return 0;
}