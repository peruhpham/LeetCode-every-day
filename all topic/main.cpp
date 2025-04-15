#include <iostream>
#include "Solution.h"

int main() {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = sol.twoSum(nums, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
