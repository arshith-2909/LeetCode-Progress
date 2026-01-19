class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int sum = 0, num = nums[i];
            while(num > 0)
            {
                sum += num % 10;
                num /= 10;
            }
            nums[i] = sum;
        }
        int minElement = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            minElement = min(minElement, nums[i]);
        }
        return minElement;
    }
};