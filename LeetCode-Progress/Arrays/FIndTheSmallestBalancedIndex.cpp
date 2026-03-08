class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return -1;
        vector<long long> preSum = {nums[0]};
        vector<__int128> sufProd = {nums[n-1]};
        for(int i = 1; i < n; i++)
            {
                preSum.push_back(preSum[i-1]+nums[i]);
            }
        for(int i = 1; i < n; i++)
            {
                if(sufProd[i-1] > preSum[n-1] || sufProd[i-1]*nums[n-1-i] > preSum[n-1])
                {
                    sufProd.push_back(preSum[n-1]+i);
                }
                else
                {
                    sufProd.push_back(sufProd[i-1]*nums[n-1-i]);
                }
            }
        reverse(sufProd.begin(), sufProd.end());
        int ind = -1;
        for(int i = 0; i < n; i++)
            {
                if(i==0 && sufProd[i+1] == 0)
                {
                    ind = i;
                    break;
                }
                else if(i == n-1 && preSum[i-1] == 1)
                {
                    ind = i;
                    break;
                }
                else if(i > 0 && i < n-1 && preSum[i-1] == sufProd[i+1])
                {
                    ind = i;
                    break;
                }
            }
        return ind;
    }
};