#include <iostream>
#include <vector>
#include <algorithm>

void findClosestSum(int idx, int count, int currentSum, int &maxSum, int M, const std::vector<int> &nums);

int main() {
    int n, m;

    std::cin >> n >> m;

    std::vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int maxSum = 0;

    findClosestSum(0, 0, 0, maxSum, m, nums);

    std::cout << maxSum << std::endl;
    
    return 0;
}

void findClosestSum(int idx, int count, int currentSum, int &maxSum, int M, const std::vector<int> &nums) {
    if (count == 3)
    {
        if (currentSum <= M)
        {
            maxSum = std::max(maxSum, currentSum);
        }

        return;
    }

    if (idx >= nums.size())
    {
        return;
    }

    findClosestSum(idx + 1, count + 1, currentSum + nums[idx], maxSum, M, nums);

    findClosestSum(idx + 1, count, currentSum, maxSum, M, nums);
}