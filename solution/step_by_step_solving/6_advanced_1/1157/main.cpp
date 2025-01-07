#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main() {
    std::string input;
    std::cin >> input;

    std::vector<int> freq(26, 0);

    for (char ch : input) {
        ch = std::toupper(ch);
        freq[ch - 'A']++;
    }

    int max_freq = 0;
    char max_char = '?';
    bool multiple = false;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = 'A' + i;
            multiple = false;
        } else if (freq[i] == max_freq && max_freq > 0) {
            multiple = true;
        }
    }

    if (multiple) {
        std::cout << "?" << std::endl;
    } else {
        std::cout << max_char << std::endl;
    }

    return 0;
}
