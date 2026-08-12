class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            int a = s[i + 1], b = s[i];
            sum += abs(int(b) - int(a));
        }
        return sum;    
    }
};