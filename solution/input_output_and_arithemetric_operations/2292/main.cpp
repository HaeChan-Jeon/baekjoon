#include <iostream>

int main() {
    int N;
    
    std::cin >> N;

    if (N == 1) {
        std::cout << 1 << std::endl;

        return 0;
    }

    int layer = 1;
    int max_room = 1;

    while (max_room < N) {
        max_room += 6 * layer;
        layer++;
    }

    std::cout << layer << std::endl;

    return 0;
}
