#include <iostream>
#include <cstdint>

int main() {
    int32_t n;

    std::cin >> n;

    int32_t count = 0;

    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            count += n / 5;

            std::cout << count;

            return 0;
        }

        n -= 3;
        count++;
    }

    std::cout << -1;
    
    return 0;
}
