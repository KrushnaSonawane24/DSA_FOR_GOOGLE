// leetcode day_12 first problem stement no 392. Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.length();



    
    }
};









// leetcode day_12 second problem stement no 412. Fizz Buzz


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
       for(int i = 1 ;i<=n;i++){
        if(i%3==0 && i%5==0){
            ans.push_back("FizzBuzz");
        }
        else if(i%3==0){
            ans.push_back("Fizz");
        }
        else if(i%5==0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
        
       }
       return ans;
    }
};
