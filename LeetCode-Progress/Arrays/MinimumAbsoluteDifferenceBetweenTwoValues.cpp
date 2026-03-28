class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int minDiff = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            {
                for(int j = i+1; j < n; j++)
                    {
                        if((nums[i] == 1 && nums[j] == 2)||(nums[i] == 2 && nums[j] == 1))
                        {
                            minDiff = min(minDiff, abs(j-i));
                        }
                    }
            }
        return minDiff == INT_MAX ? -1: minDiff;
    }
};©leetcode