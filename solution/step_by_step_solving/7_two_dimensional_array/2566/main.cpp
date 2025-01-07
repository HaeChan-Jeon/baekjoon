#include <iostream>
#include <string>

int main() {
    int a;

    int** array = new int*[9];


    for (int i = 0; i < 9; i++)
    {
        array[i] = new int[9];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cin >> array[i][j];
        }
    }

    int max_value = 0;

    int row, col;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (array[i][j] >= max_value)
            {
                max_value = array[i][j];

                row = i + 1;
                col = j + 1;
            }
        }
    }

    std::cout << max_value << std::endl;
    std::cout << std::to_string(row) + " " + std::to_string(col) << std::endl;

    return 0;
}