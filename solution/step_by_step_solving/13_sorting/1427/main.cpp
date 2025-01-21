#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main() {
    int32_t n;

    std::cin >> n;

    std::vector<int32_t> vec;

    do
    {
        vec.push_back(n % 10);
        n /= 10;
        
    } while (n > 0);

    std::sort(vec.begin(), vec.end(), std::greater<int32_t>());

    for (int32_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i];
    }

    return 0;
}