/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start

#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, j = 0;
        while (i < n) {
            int count = 0;
            char c = chars[i];
            while (i < n && chars[i] == c) {
                i++;
                count++;
            }
            chars[j++] = c;
            if (count > 1) {
                string s = to_string(count);
                for (char c : s) {
                    chars[j++] = c;
                }
            }
        }
        return j;
    }
};
// @lc code=end

