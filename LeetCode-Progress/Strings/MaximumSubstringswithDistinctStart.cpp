class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<int> st;
        int cnt = 0;
        for(auto it : s)
        {
            if(!st.count(it))
            {
                st.insert(it);
                cnt++;
            }
        }
        return cnt;
    }
};