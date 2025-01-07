#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    std::vector<int> vec(3);

    while (std::cin >> vec[0] >> vec[1] >> vec[2])
    {
        if (vec[0] == 0 && vec[1] == 0 && vec[2] == 0)
        {
            return 0;
        }

        std::sort(vec.begin(), vec.end());

        if (vec[2] < (vec[1] + vec[0]))
        {
            std::set<int> set(vec.begin(), vec.end());

            if (set.size() == 1)
            {
                std::cout << "Equilateral" << std::endl;
            }
            else if (set.size() == 2)
            {
                std::cout << "Isosceles" << std::endl;
            }
            else
            {
                std::cout << "Scalene" << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid" << std::endl;
        }
    }

    return 0;
}
