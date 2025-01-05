#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <iomanip>

int main() {
    std::unordered_map<std::string, double> grade_to_point = {
        {"A+", 4.5}, {"A0", 4.0},
        {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0},
        {"D+", 1.5}, {"D0", 1.0},
        {"F", 0.0}
    };

    std::string line;
    double total_points = 0.0;
    double total_credits = 0.0;

    for (int i = 0; i < 20; i++) {
        std::getline(std::cin, line);
        std::istringstream iss(line);

        std::string subject, grade;
        double credit;
        iss >> subject >> credit >> grade;

        if (grade == "P") {
            continue;
        }

        total_points += credit * grade_to_point[grade];
        total_credits += credit;
    }

    double result = total_points / total_credits;

    std::cout << std::fixed << std::setprecision(6) << result << std::endl;

    return 0;
}
