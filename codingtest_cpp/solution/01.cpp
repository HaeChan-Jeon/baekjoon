#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// 정수 배열 arr을 오름차순으로 정렬해서 반환하는 함수
vector<int> solution(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

// 정수 배열 arr을 출력하는 함수 -> 시간이 오래 걸릴 수도 있음
// void print(vector<int> arr) {
//     for (int it : arr) {
//         cout << it << " ";
//     }
//     cout << "\n";
// }

// 추천: std::vector<int> 타입의 벡터를 출력하는 함수 사용
void print(const vector<int> &arr) {
    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    print(solution({1, -5, 2, 4, 3}));
    print(solution({2, 1, 1, 3, 2, 5, 4}));
    print(solution({6, 1, 7}));

    return 0;
}
