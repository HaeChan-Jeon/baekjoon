#include <iostream>
#include <string>

int main() {
    std::string n;
    uint64_t b;

    std::cin >> n >> b;

    uint64_t result = 0;

    for (char number : n) {
        int intNumber;
        
        if (number >= '0' && number <= '9') {
            intNumber = number - '0';
        } else {
            intNumber = number - 'A' + 10;
        }
        result = result * b + intNumber;
    }

    std::cout << result << std::endl;

    return 0;
}
