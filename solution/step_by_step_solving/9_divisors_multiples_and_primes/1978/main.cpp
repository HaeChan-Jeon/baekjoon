#include <iostream>
#include <cmath>

int main() {
    int a;

    std::cin >> a;

    int b, c, count = 0;

    for (int i = 0; i < a; i++)
    {
        std::cin >> b;

        if (b == 1)
        {
            continue;
        }

        c = 1;

        for (int j = 2; j <= std::sqrt(b); j++)
        {
            if ((b % j) == 0)
            {
                c = 0;

                break;
            }
        }

        if (c == 1)
        {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}