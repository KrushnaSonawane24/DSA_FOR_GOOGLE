// leetcode day_9 first problem stement no 205. Isomorphic Strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length()!= t.length()) return false ;
        unordered_map<char,char>mapST;
        unordered_map<char,char>mapTS;



        for(int i=0;i<s.length();i++){
            char c1 = s[i];
            char c2= t[i];

            if (mapST.count(c1) && mapST[c1]!=c2)return false;
            
            if (mapTS.count(c2) && mapTS[c2]!=c1)return false;

                mapST[c1] = c2;
                mapTS[c2] = c1;
            
        }
        return true ;
        
    }
};




// leetcode day_9 second problem stement no Q1. Concatenation of Array



class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        
        for (int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};






