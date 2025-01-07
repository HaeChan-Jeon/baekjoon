#include <iostream>

int main() {
    int n, k, result;

    std::cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        if ((n % (i + 1)) == 0)
        {
            result = i + 1;

            k--;

            if (k == 0)
            {
                break;
            }
        }
    }

    if (k != 0)
    {
        result = 0;
    }
    
    std::cout << result << std::endl;

    return 0;
}