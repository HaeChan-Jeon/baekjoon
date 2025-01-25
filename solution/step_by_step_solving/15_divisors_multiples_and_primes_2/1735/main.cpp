#include <iostream>
#include <cstdint>

int32_t gcd(int32_t a, int32_t b) {
    while (b != 0) {
        int32_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int32_t a, b, c, d;

    std::cin >> a >> b >> c >> d;

    int32_t numerator = a * d + c * b;
    int32_t denominator = b * d;

    int32_t g = gcd(numerator, denominator);

    numerator /= g;
    denominator /= g;

    std::cout << numerator << " " << denominator << std::endl;

    return 0;
}
