#include <iostream>
#include <cmath>

int main() {
    int m, n;

    std::cin >> m >> n;

    int result = 0;

    int min_value = 0;

    bool is_prime;

    for (int i = m; i <= n; i++)
    {
        if (i == 1)
        {
            continue;
        }

        is_prime = true;

        for (int j = 2; j <= std::sqrt(i); j++)
        {
            if (i % j == 0)
            {
                is_prime = false;

                break;
            }
        }

        if (is_prime == true)
        {
            result += i;

            if (min_value == 0)
            {
                min_value = i;
            }
        }
    }
    
    if (result == 0)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << result << std::endl;
        std::cout << min_value << std::endl;
    }
    
    return 0;
}