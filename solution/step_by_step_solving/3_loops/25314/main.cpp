#include <iostream>

int main() {
    int a;

    std::cin >> a;

    std::string b = "long";

    for (size_t i = 1; i < a/4; i++)
    {
        b = b + " long";
    }

    b = b + " int";

    std::cout << b << std::endl;

    return 0;
}