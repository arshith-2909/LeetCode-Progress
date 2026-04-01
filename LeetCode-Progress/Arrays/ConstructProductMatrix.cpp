class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans(row, vector<int>(col, 0));
        vector<int> pref(row*col);
        vector<int> suff(row*col);
        int ind = 0;
        int pre = 1, suf = 1;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                pre *= (grid[i][j]%12345);
                pre %= 12345;
                pref[ind++] = pre;
            }
        }
        for(int i = row-1; i >= 0; i--)
        {
            for(int j = col-1; j >= 0; j--)
            {
                suf *= (grid[i][j]%12345);
                suf %= 12345;
                suff[--ind] = suf;
            }
        }
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                int index = (i * col) + j;
                if(i == 0 && j == 0)
                {
                    ans[i][j] = suff[index+1];
                }
                else if(i == row -1 && j == col -1)
                {
                    ans[i][j] = pref[index-1];
                }
                else
                {
                    ans[i][j] = pref[index-1]*suff[index+1];
                }
                ans[i][j] %= 12345;
            }
        }
        return ans;
    }
};