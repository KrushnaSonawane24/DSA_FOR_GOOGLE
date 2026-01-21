/* leetcode day_10 first problem stement no 290. Word Pattern*/


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";

        for (int i = 0 ; i<s.length();i++){
            if (s[i]==' '){
                words.push_back(temp);
                temp = "";
            }else {
                temp+=s[i];
            }


            
        }
        words.push_back(temp);

        if (pattern.length() != words.size()) return false;

        unordered_map<char,string>mapCharTOWord;
        unordered_map<string,char>mapWordTOChar;

        for(int i=0;i< pattern.length();i++){
            char p=pattern[i];
            string w = words[i];

            if(mapCharTOWord.count(p) && mapCharTOWord[p] != w ) return false;

            if(mapWordTOChar.count(w) && mapWordTOChar[w]!= p) return false ;

            mapCharTOWord[p]=w;
            mapWordTOChar[w]=p;

        }
        return true;
        
    }
};