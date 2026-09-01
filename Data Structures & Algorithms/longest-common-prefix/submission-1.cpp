class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length = 201;
        for (int i = 0; i < strs.size(); i++)
            if (strs[i].size() < min_length)
                min_length = strs[i].size();

        string prefix = "";
        for (int i = 0; i < min_length; i++)
        {
            for (int j = 1; j < strs.size(); j++)
                if (strs[0][i] != strs[j][i])
                    return prefix;
            prefix.push_back(strs[0][i]);  
        }
        return prefix;
    }
};