class Solution {
public:
    int gcd(int a, int b)
    {
        if(!a)
            return b;
        else if(!b)
            return a;
        else
        {
            int big = max(a, b);
            int small = min(a, b);
            int mod = big % small;
            return gcd(big%small, small);
        }
    }
    int max_elem(vector<int>& nums)
    {
        int big = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > big)
                big = nums[i];
        }
        return big;
    }
    int min_elem(vector<int>& nums)
    {
        int small = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < small)
                small = nums[i];
        }
        return small;
    }
    int findGCD(vector<int>& nums) {
        int a = max_elem(nums);
        int b = min_elem(nums);
        return gcd(a, b);
    }
};