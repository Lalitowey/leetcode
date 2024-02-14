/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start

#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < numbers.size(); i++) {
            if (m.find(target - numbers[i]) != m.end()){
                res.insert(res.end(), {m[target - numbers[i]] + 1, i + 1});
                return res;
            }
            else {
                m[numbers[i]] = i;
            }
        }
        return res;
    }
};
// @lc code=end

