class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int it: nums)
        {
            int rem = it % 3;
            cnt = cnt + min(rem, (3-rem));
        }
        return cnt;
    }
};