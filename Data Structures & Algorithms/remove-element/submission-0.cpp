class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, len = nums.size();
        vector<int> new_nums;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == val)
            {
                k++;
                for (int j = i; j < nums.size() - 1; j++)
                    nums[j] = nums[j + 1];
                i--;
                nums.pop_back();   
            }
        return len - k;    
    }
};