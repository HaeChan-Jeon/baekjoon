#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;

    std::cin >> n >> m;

    int** array1 = new int*[n];
    int** array2 = new int*[n];
    int** result = new int*[n];

    for (int i = 0; i < n; i++)
    {
        array1[i] = new int[m];
        array2[i] = new int[m];
        result[i] = new int[m];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> array1[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> array2[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}