#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    if (n == 1) {
        return 1;
    }

    if (n == 2) {
        return 2;
    }

    vector<int> execution(n + 1, 0);

    execution[1] = 1;
    execution[2] = 2;

    for (int i = 3; i <= n; ++i) {
        execution[i] = (execution[i - 1] + execution[i - 2]) % 15746;
    }

    return execution[n];
}

int main() {
    int n;
    cin >> n;
    cout << solution(n);
}