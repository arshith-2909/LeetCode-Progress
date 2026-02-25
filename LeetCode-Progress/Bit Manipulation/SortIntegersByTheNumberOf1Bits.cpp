class Solution {
public:
    int count(int n)
    {
        int cnt = 0;
        while(n > 0)
        {
            if(n%2 == 1)
                cnt++;
            n /= 2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        map<int, vector<int>> mp;
        for(auto it : arr)
        {
            mp[count(it)].push_back(it);
        }
        for(auto it:mp)
        {
            sort(it.second.begin(), it.second.end());
            for(int i = 0; i < it.second.size(); i++)
            {
                ans.push_back(it.second[i]);
            }
        }
        return ans;
    }
};