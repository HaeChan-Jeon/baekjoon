#include <iostream>
#include <string>

int main() {
    int a;
    std::cin >> a;

    int b, c;

    for (size_t i = 0; i < a; i++)
    {
        std::cin >> b >> c;
        std::cout << 
        "Case #" + 
        std::to_string(i + 1) + 
        ": " +
        std::to_string(b) + 
         " + " +
        std::to_string(c) +
         " = " +
        std::to_string(b + c) 
        << std::endl;
    }

    return 0;
}