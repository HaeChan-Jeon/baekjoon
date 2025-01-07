#include <iostream>
#include <vector>
#include <string>

int main() {
    int count;

    std::cin >> count;

    int result = 0;

    for (int i = 0; i < count; i++) {
        std::string input;

        std::cin >> input;

        std::vector<bool> visited(26, false);
        
        bool isGroupWord = true;

        for (size_t j = 0; j < input.size(); j++) {
            if (j > 0 && input[j] != input[j - 1] && visited[input[j] - 'a']) {
                isGroupWord = false;

                break;
            }

            visited[input[j] - 'a'] = true;
        }

        if (isGroupWord) {
            result++;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
