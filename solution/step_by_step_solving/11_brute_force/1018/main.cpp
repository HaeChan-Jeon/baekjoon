#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main() {
    uint32_t n, m;

    std::cin >> n >> m;

    char** array = new char*[n];

    for (uint32_t i = 0; i < n; i++)
    {
        array[i] = new char[m];

        for (uint32_t j = 0; j < m; j++)
        {
            std::cin >> array[i][j];
        }
    }

    uint32_t start_n_point = 0, start_m_point = 0;
    uint32_t min_recolor = 64;

    while (true)
    {
        uint32_t count_started_w = 0;
        uint32_t count_started_b = 0;

        for (uint32_t i = start_n_point; i < start_n_point + 8; i++)
        {
            for (uint32_t j = start_m_point; j < start_m_point + 8; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    if (array[i][j] != 'W')
                    {
                        count_started_w++;
                    }
                    if (array[i][j] != 'B')
                    {
                        count_started_b++;
                    }
                }
                else
                {
                    if (array[i][j] != 'B')
                    {
                        count_started_w++;
                    }
                    if (array[i][j] != 'W')
                    {
                        count_started_b++;
                    }
                }
            }
        }

        min_recolor = std::min(min_recolor, std::min(count_started_w, count_started_b));

        start_m_point++;

        if (start_m_point > m - 8)
        {
            start_m_point = 0;
            start_n_point++;
        }

        if (start_n_point > n - 8)
        {
            std::cout << min_recolor << std::endl;

            break;
        }
    }

    for (uint8_t i = 0; i < n; i++)
    {
        delete[] array[i];
    }
    
    delete[] array;

    return 0;
}
