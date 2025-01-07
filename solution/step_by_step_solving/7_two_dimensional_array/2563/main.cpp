#include <iostream>

int main() {
    int** array = new int*[100];

    for (int i = 0; i < 100; i++) {
        array[i] = new int[100];

        for (int j = 0; j < 100; j++) {
            array[i][j] = 0;
        }
    }

    int number;

    std::cin >> number;

    int x, y;

    for (int i = 0; i < number; i++) {
        std::cin >> x >> y;

        for (int j = y; j < y + 10; j++) {
            for (int k = x; k < x + 10; k++) {
                array[j][k] = 1;
            }
        }
    }

    int result = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            result += array[i][j];
        }
    }

    std::cout << result << std::endl;

    return 0;
}
