#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> vec(30);

    for (size_t i = 0; i < 28; i++)
    {
        std::cin >> vec[i];
    }

    std::vector<int> result;

    for (size_t i = 0; i < 30; i++)
    {
        if (std::find(vec.begin(), vec.end(), (i + 1)) == vec.end())
        {
            result.push_back(i + 1);
        }
    }

    std::sort(result.begin(), result.end());

    std::cout << std::to_string(result[0]) << std::endl;
    std::cout << std::to_string(result[1]) << std::endl;

    return 0;
}
