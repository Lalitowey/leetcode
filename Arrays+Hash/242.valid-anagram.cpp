/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include <string>
#include <algorithm>
#include <unordered_map>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        //create map
        std::unordered_map<char, int> map;
        // iterate over s and count # of each char
        for (auto x : s) {
            map[x]++;
        }
        // decrements count for each char in t
        // this helps to check if all chars in s are present in t
        for (auto x : t) {
            map[x]--;
        }
        //iterate over map and check if all values are 0
        // if not return false
        for(auto x : map) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

