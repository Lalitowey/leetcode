/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int n = s.length();
        int i = n-1;
        while(i>=0){
            while(i>=0 && s[i] == ' ') i--;
            if(i<0) break;
            int j = i;
            while(j>=0 && s[j] != ' ') j--;
            if(res.length() != 0) res += " ";
            res += s.substr(j+1, i-j);
            i = j;
        }
        return res;
    }
};
// @lc code=end

