class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0, n = nums.size();
        int el1 = 0, el2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(cnt1 == 0 && nums[i] != el2)
            {
                el1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && nums[i] != el1)
            {
                el2 = nums[i];
                cnt2 = 1;
            }
            else if(nums[i] == el1)
                cnt1++;
            else if(nums[i] == el2)
                cnt2++;
            else
                cnt1--, cnt2--;
        }
        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        for(int it: nums)
        {
            if(it == el1)
                cnt1++;
            else if(it == el2)
                cnt2++;
        }
        if(cnt1 > n/3)
            ans.push_back(el1);
        if(cnt2 > n/3)
            ans.push_back(el2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};