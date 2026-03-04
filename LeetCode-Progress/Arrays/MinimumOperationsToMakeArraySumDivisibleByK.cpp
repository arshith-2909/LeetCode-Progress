class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        while(sum % k != 0)
        {
            sum--;
            cnt++;
        }
        return cnt;
    }
};