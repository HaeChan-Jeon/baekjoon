#include <iostream>
#include <cstdint>

int main() {
    int32_t a, b, c, d, e, f;

    std::cin >> a >> b >> c >> d >> e >> f;

    for (int32_t x = -999; x <= 999; ++x)
    {
        for (int32_t y = -999; y <= 999; ++y)
        {
            if (a * x + b * y == c && d * x + e * y == f)
            {
                std::cout << x << " " << y << std::endl;

                return 0;
            }
        }
    }

    return 0;
}
