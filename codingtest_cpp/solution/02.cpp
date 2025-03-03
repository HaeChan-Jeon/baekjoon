// lst 길이는 2 이상 1000 이하
// lst 원소 값은 -100,000 이상 100,000 이하

// 정수 배열 lst가 주어짐
// 배열의 중복값을 제거함
// 배열 데이터를 내림차순으로 정렬하고 반환

// 프로토타입
// vector<int> solution(vector<int> lst)

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void print(const vector<int> &vec);

// 정수 배열을 입력받아서 unique 함수를 통해 정렬하고 erase를 사용해서 중복을 제거하는 함수(내림차순 포함)
// vector<int> solution(vector<int> lst) {
//     sort(lst.begin(), lst.end());
//     lst.erase(unique(lst.begin(), lst.end()), lst.end());
//     sort(lst.rbegin(), lst.rend());
//     return lst;
// }

// 혹은 sort 내 compare 함수를 만들어도 됨
// bool compare(int a, int b) {
//     return a > b;
// }

// 이렇게 정렬해도 됨
vector<int> solution(vector<int> lst) {
    sort(lst.rbegin(), lst.rend());
    lst.erase(unique(lst.begin(), lst.end()), lst.end());
    return lst;
}

void print(const vector<int> &vec) {
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    print(solution({4, 2, 2, 1, 3, 4}));
    print(solution({2, 1, 1, 3, 2, 5, 4}));

    return 0;
}