#include <iostream>

int main() {
    int X;
    
    std::cin >> X;

    int diagonal = 0, sum = 0;

    while (sum < X) {
        diagonal++;

        sum += diagonal;
    }

    int position = X - (sum - diagonal);

    int numerator, denominator;

    if (diagonal % 2 == 0) {
        numerator = position;
        denominator = diagonal - position + 1;
    } else {
        numerator = diagonal - position + 1;
        denominator = position;
    }

    std::cout << numerator << "/" << denominator << std::endl;

    return 0;
}
