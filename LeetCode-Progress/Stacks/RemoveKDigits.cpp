class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        if(k == num.size())
            return "0";
        stack<char> st;
        for(int i = 0; i < num.size(); i++)
        {
            while(!st.empty() && k > 0 && st.top() > num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k > 0)
        {
            st.pop();
            k--;
        }
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        while(res.size() > 0 && res.back() == '0')
            res.pop_back();
        if(res.size() == 0)
            return "0";
        reverse(res.begin(), res.end());
        return res;
    }
};