//leetcode day_2 first problem stement no 14. Longest Common Prefix

include <iostream>
using namespace std;
int main(){
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        string prefix = strs[0];

        for (int i = 0; i < prefix.length(); i++) {
            char currentChar = prefix[i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return prefix.substr(0, i);
                }
            }
        }

        return prefix;
    }
};
}
