#include <iostream>
#include <cstdint>
#include <unordered_map>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n, m;

    std::cin >> n >> m;

    std::unordered_map<int32_t, std::string> num_to_name;
    std::unordered_map<std::string, int32_t> name_to_num;

    for (int32_t i = 1; i <= n; ++i)
    {
        std::string value;

        std::cin >> value;

        num_to_name[i] = value;
        name_to_num[value] = i;
    }

    for (int32_t i = 0; i < m; ++i)
    {
        std::string value;

        std::cin >> value;

        if (isdigit(value[0]))
        {
            int key = std::stoi(value);

            std::cout << num_to_name[key] << "\n";
        }
        else
        {
            std::cout << name_to_num[value] << "\n";
        }
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>
// #include <cctype>

// int main() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(nullptr);

//     int32_t n, m;

//     std::cin >> n >> m;

//     std::vector<std::string> names(n + 1);

//     for (int32_t i = 1; i <= n; ++i)
//     {
//         std::cin >> names[i];
//     }

//     for (int32_t i = 0; i < m; ++i)
//     {
//         std::string value;
    
//         std::cin >> value;

//         if (isdigit(value[0]))
//         {
//             int key = std::stoi(value);

//             std::cout << names[key] << "\n";
//         }
//         else
//         {
//             for (int32_t j = 1; j <= n; ++j)
//             {
//                 if (names[j] == value)
//                 {
//                     std::cout << j << "\n";

//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }
