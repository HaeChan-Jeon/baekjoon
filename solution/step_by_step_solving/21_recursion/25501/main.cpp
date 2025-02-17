#include <iostream>
#include <cstring>

int recursion(const char *s, int l, int r, uint16_t &count) {
    count++;

    if (l >= r)
    {
        return 1;
    }
    else if (s[l] != s[r])
    {
        return 0;
    }
    else
    {
        return recursion(s, l + 1, r - 1, count);
    }
}

int isPalindrome(const char *s, uint16_t &count) {
    count = 0;

    return recursion(s, 0, strlen(s) - 1, count);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint16_t t;

    std::cin >> t;

    while (t--) {
        std::string s;

        std::cin >> s;

        uint16_t count;

        uint16_t result = isPalindrome(s.c_str(), count);

        std::cout << result << " " << count << "\n";
    }

    return 0;
}
