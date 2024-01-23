/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */
// @lc code=start

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash_map;
        for (string str : strs) {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());
            hash_map[sorted_str].push_back(str);
        }
        vector<vector<string>> result;
        
        for (auto it = hash_map.begin(); it != hash_map.end(); ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};
// @lc code=end

