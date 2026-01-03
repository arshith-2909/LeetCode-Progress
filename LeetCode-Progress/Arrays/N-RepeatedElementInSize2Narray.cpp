//Using Map O(N) complexity
// class Solution {
// public:
//     int repeatedNTimes(vector<int>& nums) {
//         int n = nums.size()/2;
//         map<int, int> mpp;
//         for(int i = 0; i < 2*n; i++)
//         {
//             mpp[nums[i]]++;
//         }
//         for(auto it: mpp)
//         {
//             if(it.second == n)
//                 return it.first;
//         }
//         return -1;
//     }
// };
 
class Solution{
public:
    int repeatedNTimes(vector<int>& nums)
    {
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                return nums[i];
            else if(i+2 < nums.size() && nums[i] == nums[i+2])
                return nums[i];
            else if(i+3 < nums.size() && nums[i] == nums[i+3])
                return nums[i];
        }
        return -1;
    }
};