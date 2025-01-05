#include <iostream>
#include <vector>
#include <string>

int main() {
    int a;

    std::cin >> a;

    std::vector<std::string> vec(a);

    for (size_t i = 0; i < a; i++)
    {
        std::cin >> vec[i];
    }

    for (size_t i = 0; i < a; i++)
    {
        std::cout << (vec[i])[0] << (vec[i])[vec[i].size() - 1] << std::endl;
    }

    return 0;
}