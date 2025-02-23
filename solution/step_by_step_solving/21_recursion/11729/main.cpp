#include <iostream>
using namespace std;

// 하노이 탑 이동 함수
void hanoi(int n, int start, int end, int via) {
    if (n == 1)
    {
        cout << start << " " << end << "\n";
    
        return;
    }

    hanoi(n - 1, start, via, end);

    cout << start << " " << end << "\n";

    hanoi(n - 1, via, end, start);
}

int main() {
    int N;
    
    cin >> N;

    cout << (1 << N) - 1 << "\n";

    hanoi(N, 1, 3, 2);

    return 0;
}
