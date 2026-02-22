class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int player1score = 0, player2score = 0;
        bool p1_active = true, p2_active = false;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 1)
            {
                swap(p1_active, p2_active);
            }
            if(i % 6 == 5)
            {
                swap(p1_active, p2_active);
            }
            if(p1_active)
                player1score += nums[i];
            else
                player2score += nums[i];
        }
        return player1score - player2score;
    }
};