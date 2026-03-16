class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long sn = (n * (n+1))/ 2;
        long long s2n = (n * (n+1) * (2*n +1))/6;
        long long s = 0, s2 = 0;
        for(auto it: nums)
        {
            s += it;
            s2 += ((long long)it * (long long)it);
        }
        long long v1 = s - sn;
        long long v2 = s2 - s2n;
        v2 = v2 / v1;
        long long x = (v1+v2)/2;
        long long y = x - v1;
        return {(int)x, (int)y};
    }
};