class Solution {
public:
    int maxCandy(vector<int>& nums)
    {
        int big = INT_MIN;
        for(auto it: nums)
        {
            if(it > big)
                big = it;
        }
        return big;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int greatest = maxCandy(candies);
        for(auto it: candies)
        {
            if((it + extraCandies) >= greatest)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};