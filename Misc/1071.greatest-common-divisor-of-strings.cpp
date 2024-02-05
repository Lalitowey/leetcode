/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //explain what the ternary operator is doing
        // if str1 + str2 == str2 + str1, then return str1.substr(0, __gcd(str1.size(), str2.size()))
        // else return ""
        // what is __gcd doing?
        // __gcd is a function that returns the greatest common divisor of two integers
        // what is str1.substr(0, __gcd(str1.size(), str2.size())) doing?
        
        return str1 + str2 == str2 + str1 ? str1.substr(0, __gcd(str1.size(), str2.size())) : "";
    }
};
// @lc code=end

