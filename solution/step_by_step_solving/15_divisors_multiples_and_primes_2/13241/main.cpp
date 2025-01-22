#include <iostream>
#include <cstdint>

int64_t gcd(int64_t a, int64_t b) {
    int64_t temp;

    do
    {
        temp = b;
        b = a % b;
        a = temp;
    } while (b != 0);
    
    return a;
}

int64_t lcm(int64_t a, int64_t b) {
    return ((a / gcd(a, b)) * b);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int64_t a, b;

    std::cin >> a >> b;

    std::cout << lcd(a, b);

    return 0;
}