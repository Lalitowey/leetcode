/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // 1 0 0 0 0 1
        // n = 1
        // output -- true

        int count = 0;

        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0){
                bool left = ( i == 0 || flowerbed[i-1] == 0);
                // why do we check if i == flowerbed.size() - 1
                // because if i == flowerbed.size() - 1, then i+1 will be out of bound
                // give me an example
                // 1 0 0 0 0 1
                // i = 5
                // i + 1 = 6
                // flowerbed.size() = 6
                // so i + 1 == flowerbed.size() - 1
                bool right = ( i == flowerbed.size() - 1 || flowerbed[i+1] == 0);
                if (left && right){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
};
// @lc code=end

