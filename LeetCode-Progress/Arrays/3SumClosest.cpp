class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int output = nums[0]+nums[1]+nums[2];
        int diff = abs(output - target);
        for(int i = 0; i < n; i++)
        {
            int j = i+1, k = n - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum - target) < diff)
                {
                    diff = abs(sum - target);
                    output = sum;
                }
                if(sum < target)
                    j++;
                else if(sum > target)
                    k--;
                else
                    return target;
            }
        }
        return output;
    }
};