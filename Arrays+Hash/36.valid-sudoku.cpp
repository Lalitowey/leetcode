/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //declare 3 hashmaps for row, col and box
        unordered_map<int, int> row[9], col[9], box[9];
        //this outter for loop is for the 9 boxes
        for (int i = 0; i < 9; i++) {
            //this inner for loop is for the 9 elements in each box
            for (int j = 0; j < 9; ++j) {
                //if the element is empty, continue
                if (board[i][j] == '.') continue;
                //convert the element to int
                int num = board[i][j] - '0';
                //calculate the box index
                //this selects the box index based on the row and col index
                //example: 1st box index is 0, 2nd box index is 1, 3rd box index is 2
                int box_index = (i / 3) * 3 + j / 3;
                //if the element is already in the row, col or box, return false
                if (row[i][num] || col[j][num] || box[box_index][num]){
                    return false;
                }
                //else, set the element to 1 in the row, col and box
                //I'm a little confused on this part please explain
                row[i][num] = 1;
                col[j][num] = 1;
                box[box_index][num] = 1;
            }
        }
        return true;
    }
};
// @lc code=end

