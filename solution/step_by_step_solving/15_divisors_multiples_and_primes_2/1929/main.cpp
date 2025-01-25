#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>

bool isPrime(int64_t num)
{
    if (num == 1)
    {
        return false;
    }

    for (int64_t i = 2; i <= std::sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

std::vector<int64_t> findPrimesBetween(int64_t n, int64_t m)
{
    std::vector<int64_t> primes;

    for (int64_t i = n; i <= m; ++i)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    int64_t n, m;

    std::cin >> n >> m;

    std::vector<int64_t> primes = findPrimesBetween(n, m);

    for (const auto& prime : primes)
    {
        std::cout << prime << "\n";
    }

    return 0;
}
