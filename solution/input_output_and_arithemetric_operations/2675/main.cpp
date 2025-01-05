#include <iostream>
#include <vector>

int main() {
    int a;

    std::cin >> a;

    std::vector<int> b(a);
    std::vector<std::string> c(a);

    for (size_t i = 0; i < a; i++)
    {
        std::cin >> b[i] >> c[i];
    }

    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < c[i].size(); j++)
        {
            for (size_t k = 0; k < b[i]; k++)
            {
                std::cout << c[i][j];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}