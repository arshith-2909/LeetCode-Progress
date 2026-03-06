class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mpp;
        for(int i:nums)
        {
            if(i % 2 == 0)
            {
                mpp[i]++;
            }
        }
        int cnt = 0, el = -1;
        for(auto it:mpp)
        {
            if(it.second > cnt)
            {
                cnt = it.second;
                el = it.first;
            }
        }
        return el;
    }
};