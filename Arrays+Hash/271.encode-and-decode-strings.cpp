#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";
        for (auto i = 0; i < strs.size(); i++){
            string str = strs[i];
            result += to_string(str.size()) + "#" + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> res;

        auto i = 0;

        while (i < s.size()){
            auto j = i;
            while (s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            res.push_back(str);
            i = j + 1 + length;
        }
        return res;
    }
};