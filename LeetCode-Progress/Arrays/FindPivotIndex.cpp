class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            nums[i] += nums[i-1];
        }
        int max_element = nums[n-1];
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(max_element - nums[i] == 0)
                    return i;
            }
            else
                if(max_element - nums[i] == nums[i-1])
                    return i;
        }
        return -1;
    }
};