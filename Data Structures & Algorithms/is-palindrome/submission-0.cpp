class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, end = s.size() - 1;
        while (st < end) {
            while (st < end && !isAlphaNum(s[st]))
                st++;
            while(st < end && !isAlphaNum(s[end]))
                end--;
            if(tolower(s[st]) != tolower(s[end]))
                return false; 
            st++;
            end--;           
        }
        return true;       
    }
    bool isAlphaNum(char c) {
        return(c >= 'a' && c <= 'z' ||
               c >= 'A' && c <= 'Z' ||
               c >= '0' && c <= '9');
    }
};
