#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> a(9);
    std::vector<int> b(9);

    for (size_t i = 0; i < 9; i++)
    {
        std::cin >> a[i];  
    }

    b = a;

    std::sort(a.begin(), a.end(), std::greater<int>());

    int c = a[0];

    std::cout << std::to_string(a[0]) << std::endl;

    int d = 0;

    for (size_t i = 0; i < 9; i++)
    {
        ++d;

        if (b[i] == c) {
            std::cout << d << std::endl;
        }
    }

    return 0;
}