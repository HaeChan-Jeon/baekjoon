#include <iostream>

int main() {
    std::string input;

    std::cin >> input;

    int count = 0;

    for (size_t i = 0; i < input.size(); i++)
    {
        if (input[i] == 'c' && input[i + 1] == '=')
        {
            i++;
        }
        else if (input[i] == 'c' && input[i + 1] == '-')
        {
            i++;
        }
        else if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=')
        {
            i = i + 2;
        }
        else if (input[i] == 'd' && input[i + 1] == '-')
        {
            i++;
        }
        else if (input[i] == 'l' && input[i + 1] == 'j')
        {
            i++;
        }
        else if (input[i] == 'n' && input[i + 1] == 'j')
        {
            i++;
        }
        else if (input[i] == 's' && input[i + 1] == '=')
        {
            i++;
        }
        else if (input[i] == 'z' && input[i + 1] == '=')
        {
            i++;
        }
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}