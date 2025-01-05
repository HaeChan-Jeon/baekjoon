#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;
    
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;

    int word_count = 0;

    while (iss >> word) {
        word_count++;
    }

    std::cout << word_count << std::endl;
    
    return 0;
}
