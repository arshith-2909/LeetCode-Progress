class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
            {
                int index = (nums[i] + i) % n;
                result.push_back(nums[index]);
            }
            else if(nums[i] < 0)
            {
                int index = (i + nums[i] % n + n) % n;
                result.push_back(nums[index]);
            }
            else 
                result.push_back(nums[i]);
        }
        return result;
    }
};