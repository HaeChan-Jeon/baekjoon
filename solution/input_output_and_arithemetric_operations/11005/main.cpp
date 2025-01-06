#include <iostream>

int main() {
    uint64_t n;
    int b;

    std::cin >> n >> b;

    std::string result = "";

    while (n > 0) {
        int remainder = n % b;

        if (remainder < 10) {
            result += (remainder + '0');
        } else {
            result += (remainder - 10 + 'A');
        }
        
        n /= b;
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        std::cout << result[i];
    }

    return 0;
}
