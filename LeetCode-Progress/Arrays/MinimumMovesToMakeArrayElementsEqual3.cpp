class Solution {
public:
    int maxi(vector<int>& arr)
    {
        int maxi= INT_MIN;
        for(int i = 0; i < arr.size(); i++)
        {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    int minMoves(vector<int>& nums) {
        int largest = maxi(nums);
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            while(n != largest)
            {
                n++;
                count++;
            }
        }
        return count;
    }
};