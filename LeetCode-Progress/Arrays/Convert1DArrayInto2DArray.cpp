class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k = 0;
        vector<vector<int>> ans;
        int ogSize = original.size();
        if(ogSize != m * n)
            return ans;
        for(int i = 0; i < m; i++)
        {
            vector<int> temp;
            for(int j = 0; j < n; j++)
            {
                temp.push_back(original[k++]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};