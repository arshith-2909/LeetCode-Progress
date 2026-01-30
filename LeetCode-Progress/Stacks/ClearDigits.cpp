class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(!st.empty() && (st.top() >= 48 && st.top() <= 57) && !isdigit(s[i]))
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