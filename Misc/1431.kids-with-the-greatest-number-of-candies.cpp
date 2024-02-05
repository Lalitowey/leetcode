/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start

#include <vector>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        for (auto i : candies) {
            // assign maxCandy to the max of maxCandy and i
            // what is max(maxCandy, i) doing?
            // it is returning the max of maxCandy and i
            
            maxCandy = max(maxCandy, i);
        }
        
        vector<bool> res;
        for (auto i : candies) {
            res.push_back(i + extraCandies >= maxCandy);
        }
        return res;  
    }
};
// @lc code=end

