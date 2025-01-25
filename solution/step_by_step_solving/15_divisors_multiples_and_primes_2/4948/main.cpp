#include <iostream>
#include <cstdint>
#include <cmath>


bool isPrime(int64_t num) {
    if (num < 2)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    if (num % 2 == 0)
    {
        return false;
    }

    for (int64_t i = 3; i <= std::sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int64_t findPrimeNumber(int64_t n) {
    int64_t count = 0;

    for (int64_t i = n + 1; i <= 2 * n; ++i)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    
    return count;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;

    while (std::cin >> n)
    {
        if (n == 0)
        {
            return 0;
        }

        std::cout << findPrimeNumber(n) << std::endl;
    }
    
    return 0;
}