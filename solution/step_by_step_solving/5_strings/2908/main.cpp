#include <iostream>
#include <algorithm>

int main() {
    std::string a, b;

    std::cin >> a >> b;

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    if (a > b)
    {
        std::cout << a << std::endl;
    }
    else
    {
        std::cout << b << std::endl;
    }

    return 0;
}