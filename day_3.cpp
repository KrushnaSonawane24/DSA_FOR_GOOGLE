//leetcode day_3 first problem stement no 28. Find the Index of the First Occurrence in a String


class Solution {
public:
    int strStr(string s1, string s2){
        int n = s1.length();
        int m = s2.length();

        for (int i = 0 ; i<= n-m ; i++){
            for (int j = 0 ; j <=n ; j++)  {
                if (s1[i+j] != s2[j])
                break ; 

                if (j == m-1)
                    return i ;
                
            }
             
        
        }
        return -1 ;
    }
};
