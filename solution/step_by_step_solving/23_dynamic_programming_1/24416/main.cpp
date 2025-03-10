#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void print(const vector<int> &arr) {
    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
}

// vector<int> memo = {n+1, 0};
vector<int> memo = {0, 0};
int fibMomoization(int n) {
    // 메모이제이션 활용
    if (memo[n] != 0) {
        return memo[n];
    }
    // 메모이제이션, 종료 조건
    if (n <= 2) {
        return 1;
    }
    // 메모이제이션, 일반항
    return memo[n] = fibMomoization(n - 1) + fibMomoization(n - 2);
}


int fib(int n) {
    return (n <= 2) ? 1 : fib(n - 1) + fib(n - 2);
}

int fibonacci(int n) {   
    int execution = 0;

    if (n <= 2) {
        execution++;
        return 1;
    }

    vector<int> f(n + 1, 0);

    f[1] = f[2] = 1;

    for (int i = 3; i <= n; i++) {
        execution++;
        f[i] = f[i - 1] + f[i - 2];
    }

    return execution;
}

vector<int> solution(int n) {
    vector<int> answer(2, 0);
    answer = {fib(n), fibonacci(n)};
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    print(solution(n));
}