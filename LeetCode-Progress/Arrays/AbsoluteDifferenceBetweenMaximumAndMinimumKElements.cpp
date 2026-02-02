class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if(nums.size() == k)
            return 0;
        sort(nums.begin(), nums.end());
        int maxi = 0,  mini = 0;
        for(int i = 0; i < k; i++)
            mini += nums[i];
        for(int i = nums.size()-1; i >= nums.size()-k; i--)
            maxi += nums[i];
        return abs(maxi - mini);
    }
};