class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, max_cnt = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                cnt = 0;
            else 
                cnt++;
            if (cnt > max_cnt)
                max_cnt = cnt;
        }  
        return max_cnt;
    }
};