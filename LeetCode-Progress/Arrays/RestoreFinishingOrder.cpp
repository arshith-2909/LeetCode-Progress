class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int> frnds = {friends.begin(), friends.end()};
        vector<int> ans;
        for(auto it: order)
        {
            if(frnds.count(it))
                ans.push_back(it);
        }
        return ans;
    }
};