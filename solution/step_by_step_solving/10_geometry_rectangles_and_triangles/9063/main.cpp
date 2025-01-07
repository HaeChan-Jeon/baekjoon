#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;

    std::cin >> n;

    std::vector<int> x(n);
    std::vector<int> y(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i] >> y[i];
    }

    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());

    std::cout << (y[n - 1] - y[0]) * (x[n - 1] - x[0]) << std::endl;

    return 0;
}