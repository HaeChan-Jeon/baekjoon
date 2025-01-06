#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> array(5);

    int max_length = 0;

    for (int i = 0; i < 5; i++) {
        std::cin >> array[i];

        if (array[i].size() > max_length) {
            max_length = array[i].size();
        }
    }

    for (int i = 0; i < max_length; i++) {
        for (int j = 0; j < 5; j++) {
            
            if (i < array[j].size()) {
                std::cout << array[j][i];
            }
        }
    }

    return 0;
}