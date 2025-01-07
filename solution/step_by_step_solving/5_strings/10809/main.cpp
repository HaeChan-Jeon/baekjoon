#include <iostream>

int main() {
    std::string a;

    std::cin >> a;

    int value;

    for (size_t i = 97; i < 123; i++)
    {
        value = a.find(i);

        if (value)
        {
            std::cout << value << " ";
        }
        else
        {
            std::cout << "0 ";
        }
    }

    return 0;
}