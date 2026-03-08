class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ind = -1, minCap = INT_MAX;
        for(int i = 0; i < capacity.size(); i++)
            {
                if(capacity[i]-itemSize < minCap && capacity[i]-itemSize >= 0)
                {
                    minCap = capacity[i]-itemSize;
                    ind = i;
                }
            }
        return ind;
    }
};