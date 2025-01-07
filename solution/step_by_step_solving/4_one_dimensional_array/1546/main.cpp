#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
    double n;

    std::cin >> n;

    std::vector<double> vec(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    double m;

    std::sort(vec.begin(), vec.end(), std::greater());

    m = vec[0];

    double result = 0;

    for (size_t i = 0; i < n; i++)
    {
        vec[i] = vec[i] / m * 100;

        result = result + vec[i];
    }

    result = result / n;

    std::cout << 
    std::fixed << 
    std::setprecision(100) 
    << result 
    << std::endl;

    return 0;
}