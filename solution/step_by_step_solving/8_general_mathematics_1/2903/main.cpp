#include <iostream>
#include <cmath>

int main() {
    int N;

    std::cin >> N;

    int side = std::pow(2, N) + 1;

    int result = side * side;

    std::cout << result << std::endl;

    return 0;
}
