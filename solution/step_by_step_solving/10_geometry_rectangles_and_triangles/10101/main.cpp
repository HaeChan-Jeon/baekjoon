#include <iostream>
#include <vector>
#include <set>

int main() {
    int a, b, c;

    std::vector<int> vec(3);

    std::cin >> vec[0] >> vec[1] >> vec[2];

    if (vec[0] + vec[1] + vec[2] == 180)
    {
        std::set<int> result(vec.begin(), vec.end());

        if (result.size() == 3)
        {
            std::cout << "Scalene";
        }
        else if (result.size() == 2)
        {
            std::cout << "Isosceles";
        }
        else
        {
            std::cout << "Equilateral";
        }
    }
    else
    {
        std::cout << "Error";
    }

    return 0;
}