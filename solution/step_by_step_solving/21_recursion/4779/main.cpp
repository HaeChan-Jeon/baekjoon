#include <iostream>
#include <vector>

std::vector<std::string> precomputed(13);

void cantor(int start, int end, std::vector<char>& vec)
{
    if (end - start < 1)
    {
        return;
    }

    int size = (end - start + 1) / 3;
    
    for (int i = start + size; i < start + 2 * size; ++i)
    {
        vec[i] = ' ';
    }
    
    cantor(start, start + size - 1, vec);
    cantor(start + 2 * size, end, vec);
}

void precompute()
{
    for (int n = 0; n <= 12; ++n)
    {
        int length = 1;

        for (int i = 0; i < n; ++i)
        {
            length *= 3;
        }
        
        std::vector<char> vec(length, '-');

        cantor(0, length - 1, vec);
        
        precomputed[n] = std::string(vec.begin(), vec.end());
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();

    int n;
    while (std::cin >> n)
    {
        std::cout << precomputed[n] << '\n' << std::flush;
    }

    return 0;
}
