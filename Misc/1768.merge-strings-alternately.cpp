/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start

#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string output;
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size()) {
            output += word1[i++];
            output += word2[j++];
        }
        while (i < word1.size()) {
            output += word1[i++];
        }
        while (j < word2.size()) {
            output += word2[j++];
        }
        return output;    
    }
};
// @lc code=end

