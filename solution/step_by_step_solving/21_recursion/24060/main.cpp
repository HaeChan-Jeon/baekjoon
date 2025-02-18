#include <iostream>
#include <vector>

// 두 정렬된 부분 배열을 병합하는 함수
void merge(std::vector<int>& A, int p, int q, int r, int& count, int K, int& result) {
    // 첫 번째 부분 배열의 시작 인덱스
    int i = p;
    // 두 번째 부분 배열의 시작 인덱스
    int j = q + 1;
    // 정렬된 결과를 저장할 임시 배열
    std::vector<int> tmp;

    // 두 부분 배열을 비교하며 정렬된 순서로 tmp에 저장
    while (i <= q && j <= r)
    {
        if (A[i] <= A[j])
        {
            tmp.push_back(A[i++]);
        }
        else
        {
            tmp.push_back(A[j++]);
        }
    }

    // 첫 번째 부분 배열에 남은 요소 추가
    while (i <= q)
    {
        tmp.push_back(A[i++]);
    }

    // 두 번째 부분 배열에 남은 요소 추가
    while (j <= r)
    {
        tmp.push_back(A[j++]);
    }

    // 정렬된 값을 원본 배열 A에 저장
    for (int k = 0; k < tmp.size(); k++)
    {
        A[p + k] = tmp[k];
        count++;

        // K번째 저장된 값을 찾으면 result에 저장
        if (count == K)
        {
            result = A[p + k];
        }
    }
}

// 병합 정렬 함수
void merge_sort(std::vector<int>& A, int p, int r, int& count, int K, int& result) {
    if (p < r)
    {
        // 중간 인덱스 계산
        int q = (p + r) / 2; 

        // 왼쪽 부분 정렬
        merge_sort(A, p, q, count, K, result);
        // 오른쪽 부분 정렬
        merge_sort(A, q + 1, r, count, K, result);
        // 정렬된 두 부분을 병합
        merge(A, p, q, r, count, K, result);
    }
}

int main() {
    int N, K;

    std::cin >> N >> K;
    
    std::vector<int> A(N);

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int count = 0;
    int result = -1;

    merge_sort(A, 0, N - 1, count, K, result);

    std::cout << result << std::endl;

    return 0;
}
