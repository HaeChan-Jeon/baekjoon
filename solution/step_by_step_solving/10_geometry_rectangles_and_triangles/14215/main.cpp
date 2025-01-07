#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> vec(3);

    std::cin >> vec[0] >> vec[1] >> vec[2];

    std::sort(vec.begin(), vec.end());

    while (vec[0] + vec[1] <= vec[2])
    {
        vec[2]--;
    }

    std::cout << std::accumulate(vec.begin(), vec.end(), 0) << std::endl;

    return 0;
}