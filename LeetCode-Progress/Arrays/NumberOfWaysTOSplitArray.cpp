class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<long> preSum = {nums[0]};
        vector<long> sufSum = {nums[n-1]};
        for(int i = 1; i < n; i++)
        {
            preSum.push_back(preSum[i-1] + nums[i]);
            sufSum.push_back(sufSum[i-1] + nums[n-i-1]);
        }
        reverse(sufSum.begin(), sufSum.end());
        for(int i = 0; i < n-1; i++)
        {
            if(preSum[i] >= sufSum[i+1])
                ans++;
        }
        return ans;
    }
};