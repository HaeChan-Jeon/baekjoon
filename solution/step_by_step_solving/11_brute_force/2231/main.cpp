#include <iostream>
#include <string>

int main() {
    std::string n;

    std::cin >> n;

    int target = std::stoi(n);
    int min_m = target - 9 * n.size();

    if (min_m < 1)
    {
        min_m = 1;
    };

    int sum;

    int temp;

    for (int i = min_m; i < target; i++)
    {
        sum = i;
        temp = i;

        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == target)
        {
            std::cout << i << std::endl;

            return 0;
        }
    }

    std::cout << 0 << std::endl;

    return 0;
}
