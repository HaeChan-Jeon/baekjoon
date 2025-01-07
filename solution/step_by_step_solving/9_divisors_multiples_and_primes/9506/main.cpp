#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int n;

    while (std::cin >> n) {
        if (n == -1) {

            return 0;
        }

        std::vector<int> divisors = {1};

        int sum = 1;

        for (int i = 2; i <= std::sqrt(n); i++) {

            if ((n % i) == 0) {
                divisors.push_back(i);
            
                sum += i;
            
                if (i != (n / i)) {
                    divisors.push_back(n / i);

                    sum += (n / i);
                }
            }
        }

        if (sum == n)
        {
            std::sort(divisors.begin(), divisors.end());

            std::cout << n << " = 1";

            for (size_t i = 1; i < divisors.size(); i++)
            {
                std::cout << " + " << divisors[i];
            }

            std::cout << std::endl;
        }
        else
        {
            std::cout << n << " is NOT perfect." << std::endl;
        }
    }
}