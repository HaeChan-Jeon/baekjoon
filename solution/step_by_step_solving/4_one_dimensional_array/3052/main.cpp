#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

int main() {
    std::vector<int> vec(10);

    for (size_t i = 0; i < 10; i++)
    {
        std::cin >> vec[i];
    }

    for (size_t i = 0; i < 10; i++)
    {
        vec[i] = (vec[i] % 42);
    }

    std::unordered_set<int> result(vec.begin(), vec.end());

    std::cout << result.size() << std::endl;

    return 0;
}