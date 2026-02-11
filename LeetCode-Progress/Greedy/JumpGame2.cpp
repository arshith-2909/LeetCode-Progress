class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int i = 0, j = 0;
        while(j < nums.size() - 1)
        {
            int farthest = 0;
            for(int k = i; k <= j; k++)
            {
                farthest = max(farthest, k + nums[k]);
            }
            i = j+1;
            j = farthest;
            count++;
        }
        return count;
    }
};