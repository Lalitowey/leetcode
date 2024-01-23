/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <vector>
#include <unordered_map>
using namespace std;


// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - num;
            // what does the return statement mean?
            // if the complement is in the hash_map, return the index of the complement and the current index
            //give me a rundown example
            // [2, 7, 11, 15], target = 9
            // i = 0, num = 2, complement = 7, hash_map = {}
            if (hash_map.find(complement) != hash_map.end()) {
                return {hash_map[complement], i};
            }
            hash_map[num] = i;
        }
        return {};
    }
};
// @lc code=end

