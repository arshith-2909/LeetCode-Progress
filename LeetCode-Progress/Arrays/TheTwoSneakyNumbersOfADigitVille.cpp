class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        set<int> st;
        vector<int> ans;
        int cnt = 0;
        for(int it : nums)
        {
            if(st.count(it))
            {
                cnt++;
                ans.push_back(it);
            }
            if(cnt == 2)
                break;
            st.insert(it);
        }
        return ans;
    }
};