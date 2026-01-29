class Solution {
public:
    string makeGood(string s) {
        stack<int> st;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(!st.empty() && abs(st.top()-s[i]) == 32)
                st.pop();
            else
                st.push(s[i]);
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};