class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0, q = 0;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(q <= p && nums[i] < nums[i+1])
            {
                p = i+1;
            }
            else if(q <= p && nums[i] == nums[i+1])
                return false;
            
            else if(nums[i] > nums[i+1])
            {
                if(q != 0 && q != i)
                    return false;
                q = i+1;
            }
            else if(q >= p && nums[i] >= nums[i+1])
                return false;
        }
        if(p <= 0 || q <= p || nums.size()-1 <= q)
            return false;
        return true;
    }
};