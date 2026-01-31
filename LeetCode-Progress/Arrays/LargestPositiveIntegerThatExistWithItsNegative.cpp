class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<int> s(nums.begin(), nums.end());
        int ans = -1;
        int j = nums.size()-1;
        while(j >= 0 && nums[j] > 0)
        {
            if(s.count(-1*nums[j]))
                ans = max(ans, nums[j]);
            j--;
        }
        return ans;
    }
};