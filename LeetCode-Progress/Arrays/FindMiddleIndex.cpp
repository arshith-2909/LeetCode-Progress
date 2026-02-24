class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i-1];
        }
        int max_el = nums[nums.size()-1];
        for(int i = 0; i < nums.size(); i++)
        {
            if(i == 0)
            {
                if(max_el - nums[i] == 0)
                    return i;
            }
            else
                if(max_el - nums[i] == nums[i-1])
                    return i;
        }
        return -1;
    }
};