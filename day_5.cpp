//leetcode day_5 first problem stement no 125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0 , r = s.length()-1;

        while (l<r){
            if (!isalnum(s[l])){
                l++;
            }
            else if (!isalnum(s[r])){
                r--;
            }
            else {
                if(tolower(s[l]) != tolower(s[r])){
                    return false;
                }
                l++;
                r--;
            }
            

        }
        return true;
    }
};







// // leetcode day_5 second problem stetment no 242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        int freq[26]={0};
        
        for (char c : s){
            freq[c-'a']--;
        }
        for (char c: t){
            freq[c-'a']++;
        }

        for(int i =0; i<26;i++){
            if (freq[i] != 0){
                return false;
            }
        }
        return true;
    }

};