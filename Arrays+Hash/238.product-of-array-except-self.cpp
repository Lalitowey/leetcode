/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start

#include <vector>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        int left = 1, right = 1;
        for (int i = 0; i < n; i++) {
            output[i] *= left;
            output[n - i - 1] *= right;
            left *= nums[i];
            right *= nums[n - i - 1];
        }
        return output;        
    }
};
// @lc code=end

