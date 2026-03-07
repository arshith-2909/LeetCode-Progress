class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> st(nums.begin(), nums.end());
        while(true)
        {
            if(st.count(original))
                original *= 2;
            else 
                break;
        }
        return original;
    }
};