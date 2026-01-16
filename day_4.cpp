// leetcode day_4 first problem stement no 58. Length of Last Word


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        
        int count = 0;

        while (i>=0 && s[i]==' '){
            i--;

        }
        
        while ( i>=0 && s[i] !=' '){
            count ++;
            i--;
        }
        return count;  
    }
};

// leetcode day_4 second problem stetment 20. Valid Parentheses

class Solution {
public:
    bool isValid(string s){
         stack<char> st;

        for (int i= 0;i<s.length();i++){
        char ch = s[i];

            if (ch=='('||ch=='['||ch=='{'){
                st.push(ch);
            }
            else {
                if(st.empty()) return false;
            

            char top = st.top();
            st.pop();

            if ((ch ==')' && top!='(' ) ||
                (ch == '}' && top != '{')||
                (ch == ']' && top != '[')){
                return false;
                }
            } 
        }
        return st.empty();
    }
    
};






























































