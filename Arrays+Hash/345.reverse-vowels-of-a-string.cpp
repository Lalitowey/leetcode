/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int i = 0, j = s.size() - 1;
        while(i < j) {
            while(i < j && vowels.find(s[i]) == vowels.end()) i++;
            while(i < j && vowels.find(s[j]) == vowels.end()) j--;
            swap(s[i++], s[j--]);
        }
        return s;
    }
};
// @lc code=end

