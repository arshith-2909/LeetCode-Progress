class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            int st = nums[i];

            while(i + 1 < nums.size() && nums[i+1] == nums[i] + 1)
            {
                i++;
            }
            int end = nums[i];
            if(st == end)
                ans.push_back(to_string(st));
            else
                ans.push_back(to_string(st) + "->" + to_string(end));
        }
        return ans;
    }
};