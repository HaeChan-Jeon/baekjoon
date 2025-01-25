#include <iostream>
#include <vector>
#include <cmath>
#include <cmath>

std::vector<bool> findPrime(int32_t limit)
{
    std::vector<bool> isPrime(limit + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int32_t i = 2; i <= std::sqrt(limit); ++i)
    {
        if (isPrime[i])
        {
            for (int32_t j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int32_t countGoldbachPartitions(int32_t n, const std::vector<bool>& isPrime)
{
    int32_t count = 0;

    for (int32_t i = 2; i <= n / 2; ++i)
    {
        if (isPrime[i] && isPrime[n - i])
        {
            ++count;
        }
    }

    return count;
}

int main() {
    int32_t t;

    std::cin >> t;

    const int32_t limit = 1000000;
    
    auto isPrime = findPrime(limit);

    while (t--) {
        int32_t n;

        std::cin >> n;

        std::cout << countGoldbachPartitions(n, isPrime) << std::endl;
    }

    return 0;
}
