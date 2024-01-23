/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start

#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    //Time: O(nlog(n - k)) so O(nlogn) in worst case when k = n/2 
    //Space: O(n)
    //All in all could be improved to O(n) time and space
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     unordered_map<int, int> freq;
    //     for (auto num : nums) {
    //         freq[num]++;
    //     }
    //     //declare result vector
    //     vector<int> res;
    //     //iterate through map using iterator
    //     priority_queue<pair<int, int>> prioQ;
    //     for (auto it = freq.begin(); it != freq.end(); it++) {
    //         prioQ.push(make_pair(it->second, it->first));
    //         if  prioQ.size() > (int)freq.size() - k) {
    //             res.push_back prioQ.top().second);
    //             prioQ.pop();
    //         }
    //     }
    //     return res; 
    // }

    typedef pair<int, int> ii;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<ii> prioQ;
        vector<int> result;
        unordered_map<int, int> freq;

        for (auto num : nums) {
            freq[num]++;
        }
        for(auto& i: freq) {
         prioQ.push({i.second, i.first});
        }
        for(int i = 0; i < k; i++) {
            ii p = prioQ.top();
         prioQ.pop();
            result.push_back(p.second);
        }
        // Your alternative solution goes here
        return result;
    }
};
// @lc code=end

