#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> x(3);
    std::vector<int> y(3);

    for (int i = 0; i < 3; i++)
    {
        std::cin >> x[i] >> y[i];
    }

    for (int num : x)
    {
        if (std::count(x.begin(), x.end(), num) == 1)
        {
            std::cout << num << " ";

            break;
        }
    }
    
    for (int num : y)
    {
        if (std::count(y.begin(), y.end(), num) == 1)
        {
            std::cout << num;

            break;
        }
    }

    return 0;
}