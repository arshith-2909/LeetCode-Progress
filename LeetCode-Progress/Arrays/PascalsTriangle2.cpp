class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long a = 1;
        vector<int> ans;
        ans.push_back(a);
        for(int i = 1; i <= rowIndex; i++)
        {
            a = a * ((rowIndex + 1) - i);
            a = a / i;
            ans.push_back(a);
        }
        return ans;
    }
};