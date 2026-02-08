class Solution {
public:
    vector<int> findpsee(vector<int>& arr)
    {
        vector<int> ans(arr.size(), -1);
        stack<int> st;
        for(int i = 0; i < arr.size(); i++)
        {
            while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();
            if(!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> findnse(vector<int>& arr)
    {
        vector<int> ans(arr.size(), arr.size());
        stack<int> st;
        for(int i = arr.size()-1; i >= 0; i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            if(!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int mod = int(1e9 + 7), sum = 0;
        vector<int> psee = findpsee(arr);
        vector<int> nse = findnse(arr);
        for(int i = 0; i < arr.size(); i++)
        {
            int left = i - psee[i];
            int right = nse[i] - i;
            long long bigvalue = right * left * 1LL;
            int val = (bigvalue * arr[i] * 1LL) % mod;
            sum = (sum + val) % mod;
        }
        return sum;
    }
};