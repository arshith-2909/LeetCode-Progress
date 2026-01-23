class Solution {
public:
    int minElem(vector<int>& nums)
    {
        int min = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < min)
                min = nums[i];
        }
        return min;
    }
    int maxElem(vector<int>& nums)
    {
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > max)
                max = nums[i];
        }
        return max;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        int small = minElem(nums), large = maxElem(nums);
        vector<int> ans;
        set<int> st(nums.begin(), nums.end());
        for(int i = small; i <= large; i++)
        {
            if(!st.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};