#include <iostream>
#include <string>

int main() {
    std::string a;

    while (std::getline(std::cin, a))
    {
        std::cout << a << std::endl;
    }
    
    return 0;
}