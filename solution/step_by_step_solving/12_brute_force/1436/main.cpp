#include <iostream>
#include <string>

int main() {
    int32_t n;
    int32_t nCount = 0;

    std::cin >> n;

    for (int32_t i = 666; ; i++)
    {
        std::string number = std::to_string(i);
        
        if (number.find("666") != std::string::npos)
        {
            nCount++;
            
            if (nCount == n)
            {
                std::cout << i;

                return 0;
            }
        }
    }

    return 0;
}
