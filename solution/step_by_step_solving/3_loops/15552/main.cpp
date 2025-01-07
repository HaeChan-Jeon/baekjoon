#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    int A, B;
    while (T--) {
        std::cin >> A >> B;
        std::cout << (A + B) << '\n';
    }

    return 0;
}
