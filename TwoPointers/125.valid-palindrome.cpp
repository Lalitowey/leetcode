/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       auto i = 0;
       auto j = s.size() - 1;

       while( i < j ) {
            if( i < j && !isalnum(s[i]) ){
                i++;
                continue;
            }
            if( i < j && !isalnum(s[j]) ){
                j--;
                continue;
            }
            if( tolower(s[i]) != tolower(s[j]) ) {return false;}
            else {
                i++;
                j--;
            }
       }
        return true;
    }
};
// @lc code=end

