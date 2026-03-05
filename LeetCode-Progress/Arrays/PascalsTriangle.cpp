class Solution {
public:
    vector<int> generateRows(int n)
    {
        int a = 1;
        vector<int> ans;
        ans.push_back(a);
        for(int i = 1; i < n; i++)
        {
            a = a * (n-i);
            a = a / i;
            ans.push_back(a);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++)
        {
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};