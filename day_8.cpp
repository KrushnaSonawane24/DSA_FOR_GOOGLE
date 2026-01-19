// leetcode day_8 first problem stement no 1071. Greatest Common Divisor of Strings


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
            
        if (str1+str2 !=str2+str1){
            return "";
        }
        int g =gcd(str1.length(),str2.length());
        return str2.substr(0,g);        
    }
};



































































































