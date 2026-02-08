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
    long long sumSubarrayMins(vector<int>& arr) {
        long long sum = 0;
        vector<int> psee = findpsee(arr);
        vector<int> nse = findnse(arr);
        for(int i = 0; i < arr.size(); i++)
        {
            int left = i - psee[i];
            int right = nse[i] - i;
            long long freq = right * left * 1LL;
            long long val = freq * arr[i] * 1LL;
            sum = sum + val;
        }
        return sum;
    }
    vector<int> findpgee(vector<int>& arr)
    {
        vector<int> ans(arr.size(), -1);
        stack<int> st;
        for(int i = 0; i < arr.size(); i++)
        {
            while(!st.empty() && arr[st.top()] < arr[i])
                st.pop();
            if(!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> findnge(vector<int>& arr)
    {
        vector<int> ans(arr.size(), arr.size());
        stack<int> st;
        for(int i = arr.size()-1; i >= 0; i--)
        {
            while(!st.empty() && arr[st.top()] <= arr[i])
                st.pop();
            if(!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    long long sumSubarrayMax(vector<int>& arr) {
        long long sum = 0;
        vector<int> pgee = findpgee(arr);
        vector<int> nge = findnge(arr);
        for(int i = 0; i < arr.size(); i++)
        {
            int left = i - pgee[i];
            int right = nge[i] - i;
            long long freq = right * left * 1LL;
            long long val = freq * arr[i] * 1LL;
            sum = sum + val;
        }
        return sum;
    }
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
};