class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ind = -1, maxEl = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > maxEl)
            {
                maxEl = nums[i];
                ind = i;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(i != ind && maxEl < nums[i]*2)
                return -1;
        }
        return ind;
    }
};