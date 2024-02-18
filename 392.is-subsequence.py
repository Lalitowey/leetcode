#
# @lc app=leetcode id=392 lang=python
#
# [392] Is Subsequence
#

# @lc code=start
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if s == "":
            return True
        else:
            s_index = 0
            for i in range(len(t)):
                if t[i] == s[s_index]:
                    s_index += 1
                if s_index == len(s):
                    return True    
        return False
        
# @lc code=end

