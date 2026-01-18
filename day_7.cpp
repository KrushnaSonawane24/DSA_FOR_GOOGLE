// leetcode day_7 first problem stement no 345. Reverse Vowels of a String

class Solution {
public:
    bool isVowel(char c){
       c= tolower(c);
       return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
        } 
    string reverseVowels(string s) {
        int i = 0 , j=s.length()-1;

        while(i<j){
            if (!isVowel(s[i])){
                i++;
            }
            else if  (!isVowel(s[j])){
                j--;
            }
            else {
                    swap(s[i],s[j]);
                    i++;
                    j--;
            }
        }

        return s;
        
    }
};


//// leetcode day_7 second problem stement no 58. Length of Last Word

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};

        for (char c: magazine){
            freq[c-'a']++;
        }
        for (char c: ransomNote){
            freq[c-'a']--;

            if (freq[c-'a'] < 0){
                return false;
            }


        }
        return true;
    }
};




























