class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, last_count = 0, last_char = 0;
        for (int i = 0; i < s.size(); i++)
        {   
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                count++;
                last_char = 1;
            }
            if (s[i] == ' ' && last_char == 1)
            {
                last_count = count;
                count = 0;
                last_char = 0;
            }     
        }
        if (count)
            last_count = count;
        return last_count;
    }
};