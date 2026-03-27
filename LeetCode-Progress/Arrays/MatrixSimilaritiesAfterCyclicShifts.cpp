class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> temp = mat;
        int row = mat.size();
        int col = mat[0].size();
        int shift = k % col;
        for(int i = 0; i < row; i++)
        {
            if(i % 2 == 0)
            {
                reverse(temp[i].begin(), temp[i].begin()+shift);
                reverse(temp[i].begin()+shift, temp[i].end());
                reverse(temp[i].begin(), temp[i].end());
            }
            else
            {
                reverse(temp[i].begin(), temp[i].begin()+(col-shift));
                reverse(temp[i].begin()+(col-shift), temp[i].end());
                reverse(temp[i].begin(), temp[i].end());
            }
        }
        return temp == mat;
    }
};