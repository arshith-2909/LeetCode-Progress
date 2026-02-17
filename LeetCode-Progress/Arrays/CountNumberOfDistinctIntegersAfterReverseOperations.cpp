class Solution {
public:
    int rev(int n)
    {
        int rev = 0;
        while(n > 0)
        {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int r = rev(nums[i]);
            nums.push_back(r);
        }
        set<int> st(nums.begin(), nums.end());
        return st.size();
    }
};