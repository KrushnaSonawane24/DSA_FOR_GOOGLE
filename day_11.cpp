/* leetcode day_11 first problem stement no 389. Find the Difference*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26]={0};

        for(char c : t){
            freq[c-'a']++;
        }

        for (char c : s){
            freq[c-'a']--;

        }
        for (int i=0;i<26;i++){
            if (freq[i]== 1){
                return char(i+'a');
            }
        }
        return ' ';
    }
};

/* leetcode day_11 second problem stement no 387. First Unique Character in a String*/


class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};

        for (char c : s){
            freq[c-'a']++;
        }

        for (int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1){
                return i;
            }

        }
        return -1;
    }
};