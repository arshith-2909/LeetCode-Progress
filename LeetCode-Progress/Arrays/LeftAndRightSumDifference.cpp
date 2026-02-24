class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum = {0};
        vector<int> rightSum = {0};
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            leftSum.push_back(nums[i]+leftSum[i]);
            rightSum.push_back(nums[n-1-i]+rightSum[i]);
        }
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            ans.push_back(abs(leftSum[i]-rightSum[n-1-i]));
        }
        return ans;
    }
};