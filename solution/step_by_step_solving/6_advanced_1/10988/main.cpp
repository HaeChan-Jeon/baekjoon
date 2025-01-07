#include <iostream>

int main() {
    std::string a;

    std::cin >> a;

    for (size_t i = 0; i < (a.size() / 2 + 1); i++)
    {
        if (a[i] == a[a.size() - i - 1])
        {
            continue;
        }
        else {
            std::cout << 0;

            return 0;
        }
    }

    std::cout << 1;

    return 0;
}