#include <iostream>
#include <cmath>
#include <cstdint>

bool isPrime(int64_t num) {
    for (int32_t i = 3; i <= std::sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int64_t nextPrime(int64_t num) {
    if (num <= 2)
    {
        return 2;
    };

    if (num % 2 == 0)
    {
        ++num;
    };

    while (!isPrime(num))
    {
        num += 2;
    }

    return num;
}

int main() {
    int32_t n;

    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int64_t number;

        std::cin >> number;

        std::cout << nextPrime(number) << std::endl;
    }
    
    return 0;
}
