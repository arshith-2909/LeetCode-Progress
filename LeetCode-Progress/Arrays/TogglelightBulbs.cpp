class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(), bulbs.end());
        vector<int> ans;
        for(auto it: bulbs)
        {
            if(ans.size() > 0 && ans.back() == it)
            {
                ans.pop_back();
                continue;
            }
            ans.push_back(it);
        }
        return ans;
    }
};