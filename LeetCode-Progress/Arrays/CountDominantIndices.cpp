class Solution {
public:
    int sumTotal(vector<int>& nums)
    {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
            }
        return sum;
    }
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sum = sumTotal(nums);
        for(int i = 0; i < nums.size(); i++)
            {
                sum -= nums[i];
                n -= 1;
                if(n > 0 && nums[i] > (sum/n))
                    ans++;
            }
        return ans;
    }
};